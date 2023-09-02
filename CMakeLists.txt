cmake_minimum_required(VERSION 3.27)

project(sysmic
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set Qt installation path. Must be changed computer to computer
set(CMAKE_PREFIX_PATH "/usr/local/Qt/bin")

find_package(Qt6 REQUIRED COMPONENTS Network)
qt_standard_project_setup()

add_subdirectory(libs)