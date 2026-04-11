#include <stdio.h>
int main ()
{int x,sum=1;
printf(" Please enter a number to calculate the factorial :");
scanf("%i",&x);

int i=1;
if (x<0)
{printf(" erorr");}
else {while (i<=x)
{sum=sum*i;
i++;}
printf(" the Factorial if %i is %i",x,sum);}

    return 0;
}