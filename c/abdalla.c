#include <stdio.h>

int calcSquare(int value){
   value=value * value;
   return value;
}

int main()
{
    int v =calcSquare(5);
    printf(" square is %d", v);
    return 0;
}

