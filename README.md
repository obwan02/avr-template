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
make upload_test
```

## TODO

- [ ] Add option to make debug symbol file paths relative or not (right now it is fixed to relative)

## Credit

The `generic-gcc-avr.cmake` toolchain file is from [this github repo](https://github.com/mkleemann/cmake-avr). It has been modified a bit to properly output debug symbols (that use relative paths). This was mainly done so that compiling on WSL would still make symbols load properly on Windows.
