#include <stdio.h>
int factorial (int a)
{
if (a==0)
{
return 1;
}
else{
return a*factorial(a-1);
}
}

int main(){
int x;
x=factorial(2);
printf ("El resultado resultado es: %d \n", x);
return 0;
}
