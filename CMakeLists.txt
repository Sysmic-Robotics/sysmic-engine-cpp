cmake_minimum_required(VERSION 3.27)

project(SysmicEngine
        VERSION 0.0.1
        LANGUAGES CXX)

add_subdirectory(libs/vision)
#añadir el resto de subdirectorios


#Target
#add_executable(SysmicEngineBinary main.cpp)
#target_compile_features(SysmicEngineBinary PRIVATE cxx_std_23)