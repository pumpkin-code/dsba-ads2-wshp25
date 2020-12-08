////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for smoke-test-project for RMQ.
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


#include <iostream>

#include "rmq.hpp"

// TODO:
//typedef DpRmqFinder<int> DpRmqFinderInt;

std::vector<int> ARR2 = { 12, 51, 32, 10, 27 };

//std::ostream& operator<<(std::ostream& s, const DpRmqFinderInt& ps)


// TODO:
void dynProgTest1()
{
//    DpRmqFinderInt fi(ARR2);
//    fi.process();

//    std::cout << "DynProg Arr 1:\n";
//    std::cout << fi;
}


int main()
{
    std::cout << "Let's do some range minimum queries!\n";

    dynProgTest1();

    std::cout << "\n\nBye-bye!\n\n";
    return 0;
}

