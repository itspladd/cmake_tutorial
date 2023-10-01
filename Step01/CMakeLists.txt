# TODO 1 DONE: Set the minimum required version of CMake to be 3.10
cmake_minimum_required(VERSION 3.10)

# TODO 2 DONE: Create a project named Tutorial
# note to self: holy shit this is bananas. I originally left out the VERSION keyword:
# project(TutorialPladd 1.0)
# this threw a weird error where, apparently, CMake was looking for a nonexistent file:
# CMake Error: Could not find cmake module file: CMakeDetermine1.0Compiler.cmake
# This error cascaded into more, but that seems like the root.
# So remember that missing/misusing keywords can be WICKED hard to diagnose.
project(TutorialPladd VERSION 1.0)
# TODO 7 DONE: Set the project version number as 1.0 in the above project command


# TODO 6 DONE: Set the variable CMAKE_CXX_STANDARD to 11
#         and the variable CMAKE_CXX_STANDARD_REQUIRED to True
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# TODO 8 DONE: Use configure_file to configure and copy TutorialConfig.h.in to
#         TutorialConfig.h
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 3 DONE: Add an executable called Tutorial to the project
add_executable(TutorialPladd tutorial.cxx)

# TODO 9 DONE: Use target_include_directories to include ${PROJECT_BINARY_DIR}
target_include_directories(TutorialPladd PUBLIC "${PROJECT_BINARY_DIR}")