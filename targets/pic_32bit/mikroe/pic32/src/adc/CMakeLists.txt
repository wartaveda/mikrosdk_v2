## ./targets/pic_32bit/mikroe/pic32/src/adc/CMakeLists.txt
set(hal_ll_def_list "")

## BEGIN ADC
if(${MCU_NAME} MATCHES "PIC32")
    string(SUBSTRING ${MCU_NAME} 0 5 MCU_NAME_FIRST_5)
    string(SUBSTRING ${MCU_NAME} 0 7 MCU_NAME_FIRST_7)
    string(SUBSTRING ${MCU_NAME} 0 8 MCU_NAME_FIRST_8)
    string(SUBSTRING ${MCU_NAME} 0 10 MCU_NAME_FIRST_10)

    list(APPEND hal_ll_def_list ${MCU_NAME})
    list(APPEND hal_ll_def_list ${MCU_NAME_FIRST_5}xx)
    list(APPEND hal_ll_def_list ${MCU_NAME_FIRST_7}xx)
    list(APPEND hal_ll_def_list ${MCU_NAME_FIRST_8}xx)
    list(APPEND hal_ll_def_list ${MCU_NAME_FIRST_10}xx)
    list(APPEND hal_ll_def_list "__pic32__")
else()
    list(APPEND hal_ll_def_list "__family_not_supported__")
endif()

if(${MCU_NAME_FIRST_7} MATCHES "PIC32MX")
    list(APPEND hal_ll_def_list "HAL_LL_ADC_RESOLUTION_CMAKE=HAL_LL_ADC_RESOLUTION_10_BIT")
elseif(${MCU_NAME_FIRST_7} MATCHES "PIC32MZ")
    list(APPEND hal_ll_def_list "HAL_LL_ADC_RESOLUTION_CMAKE=HAL_LL_ADC_RESOLUTION_12_BIT")
endif()

if(${MCU_NAME} MATCHES "(^PIC32MX[1-7][1-79][045]F(512|256|128|064|032|016)[HLBCD]B?$)")
    set(adc_implementation "implementation_1/hal_ll_adc.c")
elseif (${MCU_NAME} MATCHES "(^PIC32MZ(0512|1024|2048)E[FC][FEHMGK](064|100|124|144)$)")
    set(adc_implementation "implementation_2/hal_ll_adc.c")
endif()
## END ADC

## BEGIN PMD
if (${MCU_NAME} MATCHES "(^PIC32MX([12][0-9]{2}|330|350|370|430|450|470|530|550|570)F(512|256|128|064|032|016)[HLBCD]B?$|^PIC32MZ(0512|1024|2048)E[FC][FEHMGK](064|100|124|144)$)")
    list(APPEND hal_ll_def_list "HAL_LL_PERIPHERAL_MODULE_DISABLE")
endif()
## END PMD

list(APPEND hal_ll_def_list "MACRO_USAGE_ADC")

mikrosdk_add_library(lib_hal_ll_adc MikroSDK.HalLowLevel.ADC
    ${adc_implementation}
    ../../include/hal_ll_target.h
    ../../include/hal_ll_slrcon_map.h
    ../../include/hal_ll_odcon_map.h
##  BEGIN ADC
    ../../include/adc/hal_ll_adc.h
    ../../include/adc/hal_ll_analog_in_map.h
##  END ADC
)

target_compile_definitions(lib_hal_ll_adc PUBLIC
    ${hal_ll_def_list}
)

target_link_libraries(lib_hal_ll_adc PUBLIC
    MikroC.Core
    MikroSDK.HalLowLevelCore
    MikroSDK.HalLowLevelCommon
)

string(TOLOWER ${MCU_NAME} MCU_HEADER_PATH_LOWER)
target_include_directories(lib_hal_ll_adc
    PRIVATE
        ../../include
        ../../include/gpio
        #BEGINADC
        ../../include/adc
        #ENDADC
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include/adc>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include/adc/${adc_pin_map}>

        $<INSTALL_INTERFACE:include/hal_ll_port>
        $<INSTALL_INTERFACE:include/${MCU_HEADER_PATH_LOWER}>
)

mikrosdk_install(MikroSDK.HalLowLevel.ADC)
install_headers(${CMAKE_INSTALL_PREFIX}/include/hal_ll_port MikroSDK.HalLowLevel.ADC ../../include/adc/hal_ll_adc.h)
