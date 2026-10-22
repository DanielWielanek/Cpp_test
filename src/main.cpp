#include <iostream>
#include "math.hpp"

int main() {
    int dane[] = {10, 20, 30, 40};
    int n = sizeof(dane) / sizeof(dane[0]);
    std::cout << "Srednia: " << srednia(dane, n) << '\n';
    return 0;
}
