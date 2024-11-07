# Rust <--> C++ Interop Example

## Purpose

This repo will show how to:

-   How to get rust to work with a C++ static library
-   How to get rust ot work with a class inheritance architecture
-   How to define bridging C++ code within the rust project

## Building

The following build tools are what this example was built on:

-   Rust: 1.82.0
-   Clang: Ubuntu clang version 14.0.0-1ubuntu1.1
-   Cmake: 3.22.1
-   g++: Ubuntu 11.4.0-1ubuntu1~22.04

To build:

1. Clone the repo
2. cd clib
3. cmake -B build -S .
4. cd build
5. make
6. cd ../..
7. cargo build
8. cargo run
