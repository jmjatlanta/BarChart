cmake_minimum_required(VERSION 3.0)

project(BarChart)

if(MSVC)
    add_compile_definitions(NOMINMAX)
endif(MSVC)

add_library( BarChart
    Bar.cpp
    Chart.cpp
)

target_include_directories(BarChart PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)
