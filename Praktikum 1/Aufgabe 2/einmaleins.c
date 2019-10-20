#include <stdio.h>

void einmaleins(int von, int bis){
    for (int j = 1; j <= 10; j++){
        for (int i = von; i <= bis; i++){
            printf("%3d ", i*j);
        }
        printf("\n");
    }
}
