#include<stdio.h>
int main()
{
int i,n;
printf("please enter number");

for(i=1;i<=10;i++){
	scanf("%d",&n);
if(n<0)printf("negative number");

else if(n>0)printf("positive number");
else printf("zero");



}
return 0;

}