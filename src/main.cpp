#include <iostream>
#include "math.hpp"

double srednia(){return 25.0;}
int main() {
    int dane[] = {10, 20, 30, 40};
    int n = sizeof(dane) / sizeof(dane[0]);
    double s = srednia(dane,n);
    if(fabs(s-25.0)<0.0001)
    std::cout << "OK"<<std::endl;
    return 0;
}
