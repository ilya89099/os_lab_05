cmake_minimum_required(VERSION 3.14)
project(lib_test C)

set(CMAKE_C_STANDARD 99)

add_library(my_list SHARED list.c list.h MD5.h MD5.c lib_interface.h)

add_executable(lab_compile_link main_link.c)
target_link_libraries(lab_compile_link my_list)

add_executable(lab_syscall_link main_syscall.c)
target_link_libraries(lab_syscall_link dl)


