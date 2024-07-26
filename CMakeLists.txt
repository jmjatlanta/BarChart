cmake_minimum_required(VERSION 3.25)
if(MSVC)
cmake_policy(SET CMP0144 NEW)
endif(MSVC)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(BarChartRoot VERSION 1.0.0 LANGUAGES CXX)

if(MSVC)
    add_compile_definitions(NOMINMAX)
endif(MSVC)

add_subdirectory(src)
add_subdirectory(test)

