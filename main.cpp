#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int genbaris, gencolom;
    string p[2][5] = {
        /*SSR*/ {"Elysia", "Raiden Mei", "Kiana", "Bronya"},
        /*SR*/ {"Regy", "Eden", "Ei", "Astolfo" }
    };
    srand (time(NULL));
    genbaris = rand() % 4;
    gencolom = rand() % 2;
    cout << genbaris;
    cout << gencolom;
    cout << p[gencolom][genbaris];
}
