find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER messages_robocup_ssl_wrapper.proto)
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER messages_robocup_ssl_detection.proto)
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER messages_robocup_ssl_geometry.proto)
qt_add_library(proto STATIC 
    ${PROTO_HEADER} ${PROTO_SRC}
)