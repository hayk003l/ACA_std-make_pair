#include "MakePair.hpp"
#include <iostream>



int main() {
    int numOne = 4;
    int numTwo = 5;

    std::pair<int, int> numPair = make_pair(numOne, numTwo);
    std::cout << "first element = " << numPair.first << std::endl;
    std::cout << "two element = " << numPair.second << std::endl;

    return 0;
    
}
