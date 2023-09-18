#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
int iterator=0;
while(iterator<10)
  {
  printf("\n%d",i*(++iterator));
  }
 }