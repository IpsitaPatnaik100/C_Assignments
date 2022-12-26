#include<stdio.h>

int main()
{
	int i=1,num;
	printf("enter a number\n");
	scanf("%d",&num);
	
	for(i=1;i<=3;i++)
	num=num/10;
	if(num==0)
	printf("it is a three digit number");
	else
	printf("it is not a three digit number");
	
	
	return 0;
}
