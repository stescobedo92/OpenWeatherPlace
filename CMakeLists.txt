cmake_minimum_required(VERSION 3.30)
project(OpenWeatherPlace)

set(CMAKE_CXX_STANDARD 23)
include_directories(include)

add_executable(OpenWeatherPlace main.cpp src/EnvLoader.cpp)
