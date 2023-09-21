#include<stdio.h>
int main()
{
int i,cube,n,result;
printf("enter the number:");
scanf("%d",&i);
int check = i;
result=0;

while(i!=0){
n=i%10;
cube=n*n*n;
result=cube+result;
i=i/10;
}
if(result==check){
printf("this no. is armstrong no.");
}
else{
printf("this no. is not armstrong");


}
return 0;
}