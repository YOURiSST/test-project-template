#!/bin/bash

PROJECT_ROOT=$(dirname $(dirname $(realpath $0)))

if [ ! -d "$PROJECT_ROOT/build" ]; then
  mkdir "$PROJECT_ROOT/build"
fi

cd "$PROJECT_ROOT/build"
cmake "$PROJECT_ROOT" -DENABLE_TESTING=OFF
make

./bin/RUN_TEST_PROJECT
