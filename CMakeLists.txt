# Specify CMake version
cmake_minimum_required(VERSION 3.11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/generic-gcc-avr.cmake")

# Specify output device
set(AVR_MCU atmega328p)
# Specify device clock
add_definitions(-DF_CPU=16000000)

# Give project a name
project(test C)

# Add the excutable
add_avr_executable(${PROJECT_NAME} src/main.c)
