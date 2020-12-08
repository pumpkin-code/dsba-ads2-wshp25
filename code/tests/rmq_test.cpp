///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief Testing module for RMQ algorithms.
///
/// © Sergey Shershakov 2020.
///
/// This code is for educational purposes of the course "Algorithms and Data 
/// Structures" provided by the School of Software Engineering of the Faculty 
/// of Computer Science at the Higher School of Economics.
///
/// When altering code, a copyright line must be preserved.
///////////////////////////////////////////////////////////////////////////////


#include <gtest/gtest.h>

#include <vector>

#include "rmq/rmq.hpp"


TEST(Rmq, simplest)
{
}

// test data
std::vector<int> ARR1 = { 12, 51, 32, 10, 27, 32, 29, 2, 38, 37, 4, 11, 1, 35,
                          24, 9, 21 };

std::vector<int> ARR2 = { 12, 51, 32, 10, 27 };


TEST(Rmq, naive1)
{
    size_t r1 = findRMQ(ARR1, 4, 7);
    EXPECT_EQ(7, r1);

    size_t r2 = findRMQ(ARR1, 4, 4);
    EXPECT_EQ(4, r2);

    size_t r3 = findRMQ(ARR1, 3, 13);
    EXPECT_EQ(12, r3);

    EXPECT_THROW(findRMQ(ARR1, 3, 2), std::invalid_argument);
    EXPECT_THROW(findRMQ(ARR1, 2, 17), std::invalid_argument);
}

// TODO:

//typedef DpRmqFinder<int> DpRmqFinderInt;


//TEST(Rmq, dynprog1)
//{
//    DpRmqFinderInt fi(ARR2);
//    fi.process();

//    int a = 0;
//}
