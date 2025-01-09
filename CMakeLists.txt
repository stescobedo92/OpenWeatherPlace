cmake_minimum_required(VERSION 3.30)
project(OpenWeatherPlace)

set(CMAKE_CXX_STANDARD 23)
include_directories(include)

add_executable(weather main.cpp src/EnvLoader.cpp src/WeatherClient.cpp)

# Add external libraries
find_package(CPR REQUIRED)
find_package(nlohmann_json REQUIRED)

target_link_libraries(weather PRIVATE cpr::cpr nlohmann_json::nlohmann_json)