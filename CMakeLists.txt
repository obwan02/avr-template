# Specify CMake version
cmake_minimum_required(VERSION 3.11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project name

# Specify output device
set(AVR_MCU atmega328p)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/generic-gcc-avr.cmake")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(first_prog C)

add_definitions(-DF_CPU=16000000)

add_avr_executable(${PROJECT_NAME} src/main.c)

