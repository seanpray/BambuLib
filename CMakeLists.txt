cmake_minimum_required(VERSION 3.10)
set(C_STANDARD 17)
set(CXX_STANDARD 22)
project(BambuLib VERSION 0.1)
find_package(Threads REQUIRED)

include(FetchContent)

FetchContent_Declare(
  simdjson
  GIT_REPOSITORY https://github.com/simdjson/simdjson.git
  GIT_TAG  tags/v0.9.6
  GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(simdjson)

add_subdirectory(lib/paho.mqtt.c)
add_subdirectory(lib/paho.mqtt.cpp)
find_package(PahoMqttCpp REQUIRED)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


file(GLOB SOURCES "src/*.cpp")
add_executable(BambuLib ${SOURCES})

configure_file(BambuLib.h.in BambuConfig.h)

target_include_directories(BambuLib PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(BambuLib PRIVATE ${PahoMqttCpp_INCLUDE_DIRS})
target_link_libraries(BambuLib PRIVATE ${PahoMqttCpp_LIBRARIES} simdjson)
