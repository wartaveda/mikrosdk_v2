if(${_MSDK_BOARD_NAME_} STREQUAL "PICDEM_LAB_II_DEVELOPMENT_PLATFORM")
    set(BOARD_PATH "include/boards/board_picdem_lab_ii_development_platform")
    set(MCU_CARD FALSE)
    set(SHIELD FALSE)
    set(DIP_SOCKET TRUE)
endif()
