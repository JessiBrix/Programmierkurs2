#include <stdio.h>

void ascii(int s){
    int zaehler = 0;
        for (int i = 32; i <= 126; i++){
            printf("%3d %2c ", i, i);
            zaehler++;
            if (zaehler % s == 0)
                printf("\n");
    }
}
