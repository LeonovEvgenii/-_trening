#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
    std::vector<int> input_vec;

    for(int i=0; i<5; i++)
    {
        int input_val;
        std::cin >> input_val;
        input_vec.push_back(input_val);
    }

    std::cout << "\nотсортированный\n";

    std::sort(input_vec.begin(), input_vec.end());

    for(std::vector<int>::iterator iter = input_vec.begin() ; iter != input_vec.end() ; iter++)
    {
        std::cout << *iter << "\n";
    }

    return 0;
}