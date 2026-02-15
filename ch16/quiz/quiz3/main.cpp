#include <vector>
#include <iostream>

template <typename T>
std::pair<size_t, size_t> findMinMax(std::vector<T>& vec) {
    std::size_t max_i {};
    std::size_t min_i {};
    T max {vec.at(0)};
    T min {vec.at(0)};

    // poorly optimized ?
    for (size_t idx {0}; idx < (vec.size()); ++idx)
    {
        if (vec[idx] < min)
        {
            min_i = idx;
            min = vec[idx];
        }
        else if (vec[idx] > max)
        {
            max_i = idx;
            max = vec[idx];
        }

    }

    return std::pair {max_i, min_i};
}
template <typename T, typename Y>
std::ostream& operator<<(std::ostream& os, std::pair<T, Y> pair) {
    os << pair.first << " " << pair.second;
    return os;
}

int main() {
    std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };

    std::pair v1minMax {findMinMax(v1)};
    std::pair v2minMax {findMinMax(v2)};

    std::cout << "first vector minmax indices: " << v1minMax << "\n";
    std::cout << "second vector minmax indices: " << v2minMax << "\n";
}
