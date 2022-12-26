#include<stdio.h>

int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	
	//when a number is divisible by 3 and 2 then it must be divisible by 6
	
	if(a%2==0 && a%3==0)
	printf("divisible by 2 and 3");
	else 
	printf("not divisible by 2 and 3");
	return 0;
}
