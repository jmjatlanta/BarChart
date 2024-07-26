cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(BarChartTest)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable( BarChartTest
    BarTests.cpp
)

if(MSVC)
    target_compile_definitions(BarChartTest PRIVATE NOMINMAX)
endif(MSVC)

include(GoogleTest)

target_include_directories(BarChartTest PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
)

target_link_libraries(BarChartTest 
    BarChart
    GTest::gtest_main
#    gmock_main
)
