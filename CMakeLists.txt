cmake_minimum_required(VERSION 3.17)
project(test_self_factory)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(include)

add_executable(test_self_factory
        src/CompressionMethodFactory/CompressionMethodFactory.cpp
        src/CompressionMethods/ZipCompression.cpp
        src/CompressionMethods/BZCompression.cpp
        main.cpp)