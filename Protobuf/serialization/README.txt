

# https://github.com/conan-io/examples2/tree/main/examples/libraries/protobuf/serialization

mkdir build && cd build

conan install .. -pr:h=default -pr:b=default --build=missing

cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=Release/generators/conan_toolchain.cmake

cmake --build .