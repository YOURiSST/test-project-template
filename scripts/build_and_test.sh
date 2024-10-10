#!/bin/bash

PROJECT_ROOT=$(dirname $(dirname $(realpath $0)))

if [ ! -d "$PROJECT_ROOT/build" ]; then
  mkdir "$PROJECT_ROOT/build"
fi

cd "$PROJECT_ROOT/build"
cmake "$PROJECT_ROOT"
make

ctest -V
