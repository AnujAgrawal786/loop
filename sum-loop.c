#include<stdio.h>
int main()
{
int i,sum;
printf("please enter the digit");
scanf("%d",&i);
sum=0;
while(i!=0){
sum = sum + (i%10);
i=i/10;


}
printf("sum of digit = %d",sum);
return 0;

}