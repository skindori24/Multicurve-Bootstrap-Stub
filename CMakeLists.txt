cmake_minimum_required(VERSION 3.20)
project(sample_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

# Each source file is a standalone program with its own main().
# TODO: add chapt2 (has two main() functions) and Ch2Ex3 (empty) once fixed.
set(PROGRAMS
  main
  Ch1Ex1
  Ch1Ex2
  Ch1Ex3
  Ch2Ex1
  Ch2Ex2
)

foreach(prog IN LISTS PROGRAMS)
  add_executable(${prog} ${prog}.cpp)
  target_compile_options(${prog} PRIVATE -Wall -Wextra -Wpedantic)
endforeach()
