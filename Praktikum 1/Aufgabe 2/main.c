#include <stdio.h>
#include "ascii.h"
#include "einmaleins.h"
#include "dualzahl.h"


int main(){
    ascii(10);
    printf("\n");
    
    printf("Bitte geben Sie die Zahl für das kleinste 1x1 ein: ");
    int von, bis;
    scanf("%d", &von);
    printf("Bitte geben Sie die Zahl für das kleinste 1x1 ein: ");
    scanf("%d", &bis);
    einmaleins(von, bis);
    printf("\n");
    
    printf("Bitte geben Sie die Zahl zum Umrechnen ein: ");
    int x;
    scanf("%d", &x);
    dualzahl(x);
    printf("\n");
    
    return 0;
}
