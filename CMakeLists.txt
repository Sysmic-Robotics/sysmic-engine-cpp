cmake_minimum_required(VERSION 3.27)

project(SysmicEngine
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/vision)
#añadir el resto de subdirectorios


#Target
#add_executable(SysmicEngineBinary main.cpp)
#target_compile_features(SysmicEngineBinary PRIVATE cxx_std_23)