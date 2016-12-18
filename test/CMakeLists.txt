cmake_minimum_required(VERSION 3.0)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories (${Boost_INCLUDE_DIRS})

add_definitions (-DBOOST_TEST_DYN_LINK)
add_definitions (-DSTAND_ALONE)

add_executable(test_symbol symbol.cpp)
target_link_libraries(test_symbol ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
target_link_libraries(test_symbol sudoku)

add_executable(test_cell cell.cpp)
target_link_libraries(test_cell ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
target_link_libraries(test_cell sudoku)

add_test(symbol test_symbol)
add_test(cell test_cell)
