#include <iostream>
#include <vector>
/*
int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    for (int elem : arr)
        std::cout << elem << "\n";
    
    for (size_t idx {0}; idx < arr.size(); ++idx)
        std::cout << arr.at(idx) << "\n";

    return 0;
} */
void printArray(const auto& arr)
{
    for (size_t idx {0}; idx < arr.size(); ++idx)
        std::cout << arr.at(idx) << "\n";
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); // use function template to print array

    return 0;
}
