#include "Algo.h"
#include "Algo.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    std::cout << std::boolalpha << none_of(vec1.begin(), vec1.end(), is_odd) << std::endl;
    std::cout << std::boolalpha << any_of(vec1.begin(), vec1.end(), is_even) << std::endl;
    std::cout << std::boolalpha << all_of(vec1.begin(), vec1.end(), is_odd) << std::endl;

}