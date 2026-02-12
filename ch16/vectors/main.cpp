#include <iostream>
#include <vector>

template <typename T>
void printElement(std::vector<T> v, int idx)
{
    if (v.size() <= static_cast<uint>(idx) || idx < 0)
        std::cout << "index out of bounds \n";
    else
        std::cout << v.at(static_cast<size_t>(idx)) << "\n";
}

int main()
{
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}
