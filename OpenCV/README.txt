
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
# 								To configure and use GCC-13 | Before calling 'cmake ..'
============================================================================================================================================

export GCC_13_PATH=/home/andtokm/DiskS/Utils/bin/gcc-13.1
export PATH=${GCC_13_PATH}/bin:${PATH}
export LD_LIBRARY_PATH=/home/andtokm/DiskS/Utils/bin/gcc-13.1/lib64
export CC=gcc-13.1 CXX=g++-13.1

============================================================================================================================================


apt-get install libvdpau-dev libx11-dev libx11-xcb-dev libfontenc-dev libice-dev libsm-dev libxau-dev libxaw7-dev 
apt-get install libxkbfile-dev  libxmuu-dev libxres-dev libxv-dev libxxf86vm-dev libxcb-render-util0-dev libxcb-xkb-dev 
apt-get install libxcb-icccm4-dev libxcb-image0-dev libxcb-keysyms1-dev libxcb-randr0-dev libxcb-shape0-dev libxcb-sync-dev
apt-get install libxcb-xfixes0-dev libxcb-xinerama0-dev libxcb-dri3-dev libxcb-cursor-dev libxcb-util-dev libxcb-util0-dev


conan profile detect --force

conan install . --output-folder=build --build=missing
cd build

cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .



>  ./SQLiteProject
# SQLite3 version 3.31.1


   void printAllSubstrings(const std::string& str)
    {
        
        for (int size = str.size(), i = 0; i < size; ++i) {
            for (int n = i + 1, counter = 0; n <= size; ++n, counter = 0)
            {
                if (2 > n - i)
                    continue;
                for (int idx = i; idx <= n - 1; ++idx) 
                    counter += str[idx] == '1' ? 1 : -1;
            }
        }
    }