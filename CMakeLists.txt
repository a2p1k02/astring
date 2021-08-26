cmake_minimum_required(VERSION 3.5)

project(astring LANGUAGES C)

add_executable(astring src/main.c src/astring/astring.h src/astring/astring.c)

add_subdirectory(external/chkd)
target_link_libraries(astring chkd)
