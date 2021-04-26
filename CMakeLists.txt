cmake_minimum_required(VERSION 3.0.0)
project(embedded-posts VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(realloc realloc.cpp)
add_executable(unique_ptr_release unique_ptr_release.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
