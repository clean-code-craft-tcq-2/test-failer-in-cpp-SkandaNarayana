cmake_minimum_required(VERSION 3.21)
project(test_failer_in_cpp_SkandaNarayana)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_failer_in_cpp_SkandaNarayana
        alerter.cpp
        misaligned.cpp
        tshirts.cpp
        utest_tshirts.cpp
        utest_misalingned.cpp utest_alerter.cpp)
