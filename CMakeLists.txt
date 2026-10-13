cmake_minimum_required(VERSION 3.30)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "f35a9ac6-8463-4d38-8eec-5d6008153e7d")

project(LearnCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_BUILD_PARALLEL_LEVEL, 2)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_MODULE_STD ON)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB MODULE_FILES CONFIGURE_DEPENDS modules/*.cppm)

add_library(modules)
target_compile_features(modules PUBLIC cxx_std_23)
target_sources(modules
  PUBLIC
    FILE_SET CXX_MODULES FILES ${MODULE_FILES}
)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE modules)
