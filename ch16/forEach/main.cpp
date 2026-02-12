#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names{
        "Alex", "Betty", "Caroline", "Dave",
        "Emily", "Fred", "Greg", "Holly"
    };

    std::cout << "Enter a name: ";
    
    std::string input {};
    std::cin >> input;

    bool nameFound {false};
    for (std::string_view name : names)
    {
        if (name == input) nameFound = true;
    }

    if (nameFound)
        std::cout << input << " was found\n";
    else
        std::cout << input << " was not found\n";

    return 0;
}
