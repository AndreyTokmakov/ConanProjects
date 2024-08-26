cmake_minimum_required(VERSION 3.15)

project(JsonTests)
set(CMAKE_CXX_STANDARD 17)

find_package(JSONCPP REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
