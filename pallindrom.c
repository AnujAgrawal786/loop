#include<stdio.h>
int main()
{
int i, reverse,p;
printf("please enter number:");
scanf("%d",&i);
reverse=0;
p=i;
while(i!=0){
reverse=(reverse*10);
reverse=reverse+i%10;
i=i/10;
}
if(p==reverse){
	printf("this no. is pallindrome");
}
else{
	printf("this no.is not pallindrome");
}
return 0;


} 