int ggt(int a, int b)
{
    /*Test*/
    while (a != b){
        if (a > b) a=a-b;
        else b=b-a;
    }
    return a;
}
