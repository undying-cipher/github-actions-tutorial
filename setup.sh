#!/bin/sh

# INFO: Initialize submodules
git submodule update --init --recursive

# INFO: Build the project using CMake
# rm -rdf ./build
mkdir ./build

# INFO: Build executable
cmake -B ./build -S .
make -C build

# INFO: Run tests & executable
./build/tests/runTests && ./build/src/cpp/CBASample
