////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Implementations of RMQ algorithms.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       8.10.2020
/// \copyright  © Sergey Shershakov 2020.
///             This code is for educational purposes of the course "Algorithms
///             and Data Structures" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// When altering code, a copyright line must be preserved.
///
////////////////////////////////////////////////////////////////////////////////


#ifndef RMQ_HPP_
#define RMQ_HPP_


#include <vector>
#include <stdexcept>

////#include <cstddef> // size_t


/// Trivial implementation of search minimum in the given range [i; j].
template<typename T>
size_t findRMQ(const std::vector<T>& arr, size_t i, size_t j)
{
    if (i > j)
        throw std::invalid_argument("Bad i <= j");
    if (j >= arr.size())
        throw std::invalid_argument("i, j out of range");

    size_t minInd = i;
    //T curMin = arr[cmInd];

    for(++i; i <= j; ++i)
    {
        if (arr[i] < arr[minInd])
            minInd = i;
    }

    return minInd;
}

// TODO:

/// The implementation of the DynProg approach

//class DpRmqFinder {



#endif // RMQ_HPP_
