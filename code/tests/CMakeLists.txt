include_directories(../src)
include_directories(.)

add_executable(rmq_tests
    # list of tests
    rmq_test.cpp

    # list of sources of the lib   
    ../src/rmq/rmq.hpp

    # gtest sources
    gtest/gtest-all.cc
    gtest/gtest_main.cc
)

# add pthread for unix systems
if (UNIX)
    target_link_libraries(rmq_tests pthread)
endif ()
