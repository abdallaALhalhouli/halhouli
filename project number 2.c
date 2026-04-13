#include <stdio.h>
int main (){
char op;
int x,y,res;
printf("plz enter an opration:");
scanf("%c",&op);
printf("plz enter a number:");
scanf("%i" ,&x);
printf("plz enter another number:");
scanf("%i",&y);

 switch (op){
case '+':
res=x+y;
printf("%i+%i=%i",x,y,res);
break;
case '-':
res=x-y;
printf("%i-%i=%i",x,y,res);
break;
case '*':
res=x*y;
printf("%i*%i=%i",x,y,res);
break;
case '/':
if (y!=0){res=x/y;
printf("%i/%i=%i",x,y,res);}

 else 
{printf("erorr");}
break;
default :
printf("erorr");
 }






return 0;}