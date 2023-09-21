#include<stdio.h>
int main()
{
int i,n,curr,lt,slt;
printf("please enter the value of n=");
scanf("%d",&n);
//printf("0\n1\n");
lt=1;
slt=0;
curr=0;
for(i=1;curr<n;i++){
curr=slt+lt;
slt=lt;
lt=curr;
}
if(curr==n){
	printf("number is in fibonacci series");
}
else{
	printf("number is not an fibonacci series");
}
return 0;
}