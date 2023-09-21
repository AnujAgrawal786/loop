#include<stdio.h>
int main()
{
int i,factorial;

printf("please enter the number");
scanf("%d",&i);
factorial=1;
while(i!=1){
factorial=factorial*i;
i--;
}
printf("factorial =%d",factorial);
return 0;
}