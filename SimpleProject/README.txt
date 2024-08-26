

# To configure and use GCC-13

export GCC_VERSION=13.2
export UTILS_PATH=/home/andtokm/DiskS/Utils

export GCC_PATH=${UTILS_PATH}/bin/gcc-$GCC_VERSION
export PATH=${UTILS_PATH}/cmake/cmake-3.30/bin/:${GCC_PATH}/bin:${PATH}

export LD_LIBRARY_PATH=${GCC_PATH}/lib64
export CC=gcc-$GCC_VERSION CXX=g++-$GCC_VERSION



# sudo pip3 install conan
conan profile detect --force
conan install . --output-folder=build --build=missing

cd build/
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
make


https://chaosteil.gitlab.io/2016/04/12/Setting-up-a-simple-Conan-project/

