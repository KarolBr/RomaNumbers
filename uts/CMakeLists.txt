set(TEST_MAIN "unit_tests")
set(TEST_SOURCE "main.cpp")
set(TEST_INCLUDES "./")

add_executable(${TEST_MAIN} ${TEST_SOURCE})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
target_link_libraries(${TEST_MAIN} PUBLIC ${CMAKE_PROJECT_NAME}_LIB Catch2::Catch2)