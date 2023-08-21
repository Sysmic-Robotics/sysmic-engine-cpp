CUR_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
SRC_DIR=$CUR_DIR/../external/proto
DST_DIR=$CUR_DIR/../external/proto_compiled
protoc -I=$SRC_DIR --cpp_out=$DST_DIR $SRC_DIR/*