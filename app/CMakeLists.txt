add_executable(${ProjectName} main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_PROJECT_NAME}_LIB)

target_include_directories(${CMAKE_PROJECT_NAME}_LIB PUBLIC 
    "../include"
    "${CMAKE_BINARY_DIR}/configured_files/include")