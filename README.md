# CMake AVR Template

This template allows you to easily start an avr project. It is currently set up for an ATMEGA328P but can easily be switched. To switch the processor change the AVR_MCU variable in `CMakeLists.txt`.

## Setup

Simply run:
`./setup.sh` in the project directory

## Build

To the project:
```bash
cd bin
cmake ../
make

# Optionally
make upload_first_prog
```

## Credit

The `generic-gcc-avr.cmake` toolchain file is basically completed ripped off from [this github repo](https://github.com/mkleemann/cmake-avr).
