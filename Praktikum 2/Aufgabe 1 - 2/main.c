#include "toUpperCase.h"
#include <stdio.h>

int main(){
    
    printf("%c\n",to_upper_case('a'));
    char text[25] = "Hällö ich bin ein Test";
    upper(text);
    printf("%s\n", text);
    return 0;
}
