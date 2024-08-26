conan install . --output-folder build --build=missing

cmake -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -B./build

cd build
make


# Using boost + Conan

# https://conan.io/center/recipes/boost