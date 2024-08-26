cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(SQLiteProject CXX)
set(CMAKE_CXX_STANDARD 20)

find_package(SQLite3 REQUIRED)

## Source files and target executable
set(SOURCE 
	src/main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCE})

message(STATUS "CONAN_LIBS: ${CONAN_LIBS}")

# target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
target_link_libraries(${PROJECT_NAME} PRIVATE sqlite3)