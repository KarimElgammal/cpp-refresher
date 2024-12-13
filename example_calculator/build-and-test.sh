#!/bin/bash
# build-and-test.sh

mkdir -p build
cd build

echo "=== Configuring with CMake ==="
cmake ..

echo "=== Building ==="
cmake --build .

echo "=== Test Execution ==="
ctest --output-on-failure

echo "=== Build and Test Complete at $(date) ==="

cd ..

if [ "$1" = "--keep-build" ]; then
    echo "Keeping build directory..."
else
    echo "Cleaning up build directory..."
    rm -rf build
fi