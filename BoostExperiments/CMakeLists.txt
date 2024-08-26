cmake_minimum_required(VERSION 3.30)

project(BoostExperiments)
project(${PROJECT_NAME} VERSION 1.0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-c -Wall -Wextra -O3)

find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)

add_executable(${PROJECT_NAME} 
	src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
	pthread
	boost::boost
	openssl::openssl
)