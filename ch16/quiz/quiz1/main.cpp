#include <vector>
#include <cassert>
#include <iostream>

namespace Player {
    enum ItemTypes {
        healthPotion,
        torch,
        arrow,
        itemTypes
    };

}

int countItems(std::vector<int>& itemCounts) {
    int count {0};
    for (int item : itemCounts)
        count += item;

    return count;
}

void print(std::vector<int>& vec) {
    std::cout << "You have " << countItems(vec) << " items in your stash.";
}

int main() {
    std::vector itemCounts {1, 5, 10};

    assert(itemCounts.size() == Player::ItemTypes::itemTypes);

    print(itemCounts);

    return 0;
}
