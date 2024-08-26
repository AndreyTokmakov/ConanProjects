cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(OpenCVProject CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

## Source files and target executable
set(SOURCE 
	src/main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCE})

message(STATUS "CONAN_LIBS: ${CONAN_LIBS}")

# target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
target_link_libraries(${PROJECT_NAME} PRIVATE opencv::opencv)