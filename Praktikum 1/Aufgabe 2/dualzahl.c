#include <stdio.h>
#include <math.h>

void dualzahl(int x){
    if (x >= 0 && x <=65535){
        for(int i = 15; i >= 0; i--){
            int counter = pow(2,i);
            if(x - counter >= 0){
                x = x - counter;
                printf("1");
            }
            else
                printf("0");
        }
    }
    else
        printf("Ungültige Zahl eingegeben");
}
