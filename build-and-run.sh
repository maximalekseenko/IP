#!/bin/bash/env bash

BASE_DIR=$(dirname "$0")
BUILD_DIR=$BASE_DIR/build/
CODE_DIR=$BASE_DIR/src/

# make build directory
if [ ! -d $BUILD_DIR ]; then
    mkdir $BUILD_DIR
fi

# compile
g++ -std=c++20 -o $BUILD_DIR/build $CODE_DIR/main.cpp $CODE_DIR/p$1/*.cpp

# run
$BUILD_DIR/build $2