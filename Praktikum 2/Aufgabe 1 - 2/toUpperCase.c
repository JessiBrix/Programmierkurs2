char to_upper_case(char c){
    return (c-32);
}

void upper(char text[]){
    int i = 0;
    while (text[i] != '\0'){
        if (text[i]>= 97 && text[i]<=122 ){
            text[i]= to_upper_case(text[i]);
        }
        i++;
    }
}
