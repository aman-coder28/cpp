cmake_minimum_required(VERSION 3.30)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "f35a9ac6-8463-4d38-8eec-5d6008153e7d")

project(YourProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_BUILD_PARALLEL_LEVEL, 1)
set(CMAKE_UNITY_BUILD ON)
set(CMAKE_CXX_FLAGS -Wno-experimental)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(-Wno-experimental)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_MODULE_STD 1)

add_library(cap)
target_sources(cap
  PUBLIC
    FILE_SET CXX_MODULES
    FILES cap.cpp
)
target_link_libraries(cap PUBLIC splt)


add_library(splt)
target_sources(splt
  PUBLIC
    FILE_SET CXX_MODULES
    FILES splt.cpp
)


add_executable(main main.cpp)
target_link_libraries(main PUBLIC cap splt)
