#include <iostream>
#include "math.hpp"

int main() {
return 0;
    int dane1[] = {11, 20, 30, 40};
    int dane2[] = {10, 21, 30, 41};
    const int n = 4;
    if (srednia(dane1, n) != 10.25) {
        std::cerr << "FAIL: 1\n";
        return 1;
    }

    if (srednia(dane2, n) != 10.5) {
        std::cerr << "FAIL: 2\n";
        return 1;
    }

    std::cout << "Wszystkie testy OK\n";
    return 0;
}
