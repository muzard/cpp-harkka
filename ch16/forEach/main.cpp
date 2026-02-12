#include <iostream>
#include <vector>

template <typename T>
bool existsEqual(std::vector<T> arr, T item)
{
    bool itemFound {false};

    for (auto& elem : arr)
    {
        if (item == elem)
        {
            itemFound = true;
            break;
        }
    }

    return itemFound;
}

int main()
{
    std::vector<std::string> names{
        "Alex", "Betty", "Caroline", "Dave",
        "Emily", "Fred", "Greg", "Holly"
    };

    std::cout << "Enter a name: ";
    
    std::string input {};
    std::cin >> input;

    /* bool nameFound {false};
    for (std::string_view name : names)
    {
        if (name == input) nameFound = true;
    } */

    bool nameFound {existsEqual(names, input)};

    if (nameFound)
        std::cout << input << " was found\n";
    else
        std::cout << input << " was not found\n";

    return 0;
}
