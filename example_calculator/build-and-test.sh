#!/bin/bash

# Exit on any error
set -e

# Create/overwrite log file and redirect output
LOG_FILE="build_and_test_results.txt"
# Remove -a flag to overwrite instead of append
exec > >(tee "${LOG_FILE}") 2>&1

echo "=== Build and Test Started at $(date) ==="

# Clean and create build directory
rm -rf build
mkdir -p build

# Configure
echo "=== CMake Configuration ==="
cmake -B build .

# Build
echo "=== Build Process ==="
cmake --build build

# Run tests
echo "=== Test Execution ==="
cd build && ctest --output-on-failure

echo "=== Build and Test Complete at $(date) ==="

# Cleanup build directory (optional)
cd ..
if [ "$1" = "--cleanup" ]; then
    echo "Cleaning up build directory..."
    rm -rf build
fi