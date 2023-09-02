project(sysmic)

qt_add_library(vision STATIC
    vision.cpp
)

target_link_libraries(vision PRIVATE Qt6::Network)

target_include_directories(vision INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/../external/proto_compiled)