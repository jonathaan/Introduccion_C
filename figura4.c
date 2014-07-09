#include <stdio.h>
int main (){
int m=5,i,j;
for(i=0;i<=m-1; i++){
  for(j=0; j<=i;j++)
  printf(" ");
    for (j=i; j<=m-1; j++)
     printf("*");
    printf ("\n");
}
return 0;
}

