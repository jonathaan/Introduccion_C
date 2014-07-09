#include<stdio.h>
int main(){
int a;
printf("ingresa tu edad:");
scanf ("%d",& a);

if(a>=18)
{
printf("Felicidades Puedes votar :D\n");
}
else
{
printf("Lo sentimos NO puedes votar, eres menor de edad :( \n");
}
return 0;
}
