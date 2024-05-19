cmake_minimum_required(VERSION 3.10)
project(House_and_Theme)

set(CMAKE_CXX_STANDARD 11)

# Добавляем исполняемый файл для примера
add_executable(example house_and_theme.cpp)

# Добавляем исполняемый файл для тестов
add_executable(tests tests.cpp)

# Связываем Google Test с тестовым исполняемым файлом
target_link_libraries(tests gtest gtest_main)
