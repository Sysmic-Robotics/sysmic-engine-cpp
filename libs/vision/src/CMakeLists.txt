project(SysmicEngine)

add_library(Vision vision.cpp)

#public: quien tenga acceso a Vision tiene acceso a los includes
target_include_directories(Vision
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../external/proto_compiled)

find_package(Qt6 REQUIRED COMPONENTS Network)
target_link_libraries(Vision PRIVATE Qt6::Network)

add_executable(main main.cpp)

target_link_libraries(main
    PRIVATE
    Vision
)