cmake_minimum_required(VERSION 3.10)
project(house_and_theme)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.10.0.tar.gz
)
# Для Windows: Предотвращаем переопределение параметров компилятора/линкера родительского проекта
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Создаем исполняемый файл для тестов
add_executable(house_and_theme_tests tests.cpp)
target_link_libraries(house_and_theme_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(house_and_theme_tests)
