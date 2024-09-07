# CMakeList.txt : CMake project for my_first_cmake_project, include source and define
# project specific logic here.
#

set(CMAKE_C_COMPILER "C:\Users\Oleg\gcc\bin\gcc.exe")
set(CMAKE_CXX_COMPILER "C:\Users\Oleg\gcc\bin\g++.exe")

cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("my_first_cmake_project")

# Add source to this project's executable.
add_executable (my_first_cmake_program "my_first_cmake_project.cpp" "my_first_cmake_project.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET my_first_cmake_program PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
