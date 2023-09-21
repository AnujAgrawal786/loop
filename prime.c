#include<stdio.h>
int main()
{
int i,j,flag;
for(i=2;i<100;i++){
	//printf("%d",i);
	flag=0;
	for(j=1;j<=i;j++){
		if(i%j==0){
		flag++;
		//printf("%d was divided by %d\n",i,j);
		}
	}
	//printf("for this value flag is %d",flag);
	if(flag==2){
		printf("%d is a prime number\n\n",i);
	}
	//printf("check ran for number %d\n",i);
}	
		
		return 0;
}