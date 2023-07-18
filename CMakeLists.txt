cmake_minimum_required(VERSION 3.25)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(
        Qt5
        COMPONENTS Core Gui Widgets Test
        REQUIRED)

enable_testing(true)
include_directories(include)
file(GLOB SOURCES "source/*.cpp")
file(GLOB HEADERS "include/*.hpp")
file(GLOB TESTCAS "testcase/*.hpp")
add_executable(${PROJECT_NAME} main.cpp ${SOURCES} ${HEADERS} source/mainwindow.ui)
add_executable(${PROJECT_NAME}_test test.cpp ${SOURCES} ${HEADERS} ${TESTCAS} source/mainwindow.ui)
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}_test)
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Test)
target_link_libraries(${PROJECT_NAME}_test Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Test)
