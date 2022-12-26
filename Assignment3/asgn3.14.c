#include<stdio.h>

int main()
{
	int i;
	printf("enter a number");
	scanf("%d",&i);
	
	if(i%7==0)
	printf("divisible by 7");
	else if(i%3==0)
	printf("divisible by 3");
	else 
	printf("neither divisible by 7 nor by 3");
	return 0;
}
