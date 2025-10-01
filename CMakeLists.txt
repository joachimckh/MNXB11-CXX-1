cmake_minimum_required(VERSION 3.16)
project(HOMEWORK1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(hwlib src/as1.cxx src/as2.cxx src/as3.cxx)
target_include_directories(hwlib PUBLIC include)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.4
)

FetchContent_MakeAvailable(Catch2)

enable_testing()

add_executable(main main.cxx)
target_link_libraries(main PRIVATE hwlib)


include(CTest)
include(Catch)

set(LVL 2 CACHE STRING "Homework level (1,2,3)")

if(LVL GREATER_EQUAL 1)
  add_executable(test_runner1 tests/test1.cxx)
  target_link_libraries(test_runner1 PRIVATE hwlib Catch2::Catch2WithMain)
  catch_discover_tests(test_runner1)
endif()

if(LVL GREATER_EQUAL 2)
  add_executable(test_runner2 tests/test2.cxx)
  target_link_libraries(test_runner2 PRIVATE hwlib Catch2::Catch2WithMain)
  catch_discover_tests(test_runner2)
endif()

if(LVL GREATER_EQUAL 3)
  add_executable(test_runner3 tests/test3.cxx)
  target_link_libraries(test_runner3 PRIVATE hwlib Catch2::Catch2WithMain)
  catch_discover_tests(test_runner3)
endif()

