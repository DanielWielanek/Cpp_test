#pragma once

double srednia(int tab[], int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }

    return suma / n;
}
