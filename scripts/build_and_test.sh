#!/bin/bash

# Переменная с путем к корню проекта
PROJECT_ROOT=$(dirname $(dirname $(realpath $0)))

# Создаем директорию для сборки, если она не существует
if [ ! -d "$PROJECT_ROOT/build" ]; then
  mkdir "$PROJECT_ROOT/build"
fi

# Переходим в директорию сборки
cd "$PROJECT_ROOT/build"

# Запускаем CMake из корневой директории проекта
cmake "$PROJECT_ROOT"

# Собираем проект
make

# Запускаем тесты
ctest -V