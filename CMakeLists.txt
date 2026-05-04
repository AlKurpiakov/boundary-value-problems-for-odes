cmake_minimum_required(VERSION 3.16)
project(boundary_value_problems_for_odes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(bvp_solver
    src/main.cpp
    src/solver.cpp
    src/task_utils.cpp
    src/tasks/first_dirichlet_test.cpp
    src/tasks/first_dirichlet_main.cpp
    src/tasks/mixed_test_classic.cpp
    src/tasks/mixed_main_improved.cpp
)

target_include_directories(bvp_solver PRIVATE include)

if(MSVC)
    target_compile_options(bvp_solver PRIVATE /utf-8)
endif()
