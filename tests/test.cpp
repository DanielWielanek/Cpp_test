#include <iostream>
#include "math.hpp"

int main() {
    if (add(2, 3) != 5) {
        std::cerr << "FAIL: add(2, 3)\n";
        return 1;
    }

    if (add(-1, 1) != 0) {
        std::cerr << "FAIL: add(-1, 1)\n";
        return 1;
    }

    std::cout << "Wszystkie testy OK\n";
    return 0;
}
