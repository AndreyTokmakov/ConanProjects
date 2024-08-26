https://chaosteil.gitlab.io/2016/04/12/Setting-up-a-simple-Conan-project/





conan profile detect --force
conan install . --output-folder=build --build=missing

cd build/
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
make

============================================================================================================================================
# 								List package available versions:
============================================================================================================================================

# for the SQLite

conan search sqlite3* --remote=conancenter   


============================================================================================================================================
# 								Install CONAN
============================================================================================================================================

sudo pip3 install conan


============================================================================================================================================
# 								Generate Profile
============================================================================================================================================

# let Conan try to guess the profile, based on the current operating system and installed tools, please run:

> conan profile detect --force


# Проверить где сохранено:

> conan config home      # --> /home/andtokm/.conan2


# Check config:

> cat /home/andtokm/.conan2/profiles/default 


============================================================================================================================================
# 								To configure and use GCC-13 | Before calling 'cmake ..'
============================================================================================================================================

export GCC_VERSION=14.2
export GCC_PATH=/home/andtokm/DiskS/Utils/bin/gcc-$GCC_VERSION

export PATH=${GCC_PATH}/bin:${PATH}
export LD_LIBRARY_PATH=${GCC_PATH}/lib64
export CC=gcc-$GCC_VERSION CXX=g++-$GCC_VERSION

export PATH=/home/andtokm/DiskS/Utils/cmake/cmake-3.30/bin/:${PATH}