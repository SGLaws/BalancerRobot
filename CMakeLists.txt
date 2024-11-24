cmake_minimum_required(VERSION 3.20)

project(balancer_robot
    VERSION 0.0.1
    DESCRIPTION "Balancer Robot"
    LANGUAGES CXX
    )

include(cmake/UpdateSubmodules.cmake)

include(CTest)
add_subdirectory(external)
add_subdirectory(tests)

