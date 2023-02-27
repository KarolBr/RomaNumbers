cmake_minimum_required(VERSION 3.22)

set(ProjectName RomanNumbers)

project(${ProjectName} LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)


include_directories(
    include
)


add_subdirectory(configured)

add_subdirectory(src)
add_subdirectory(app)

