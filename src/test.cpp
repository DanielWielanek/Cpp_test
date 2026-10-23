#include <iostream>
#include "math.hpp"
#include <math.h>

int main() {

    int dane1[] = {11, 20, 30, 40};
    int dane2[] = {10, 21, 30, 41};
    const int n = 4;
    double epsilon = 0.0001;
    if (fabs(srednia(dane1, n) - 25.25)>epsilon) {
        std::cerr << "FAIL: 1\n";
        return 1;
    }

    if (fabs(srednia(dane2, n) - 25.5)>epsilon) {
        std::cerr << "FAIL: 2\n";
        return 1;
    }

    std::cout << "Wszystkie testy OK\n";
    return 0;
}
