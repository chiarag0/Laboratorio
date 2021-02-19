cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 11)

set(GOOGLETEST_VERSION 1.10.0)

add_subdirectory(googletest-master/googletest/)
set(gtest_DIR, googletest-master/googletest)
include_directories(${gtest_DIR}/include ${gtest_DIR})


set(SOURCES_TESTS runAllTests.cpp ChatTest.cpp MessageTest.cpp UserTest.cpp ../Chat.cpp ../Message.cpp ../User.cpp)
add_executable(test ${SOURCES_TESTS})
target_link_libraries(test gtest gtest_main )


