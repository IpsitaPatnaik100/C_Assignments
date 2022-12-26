#include<stdio.h>

int main()
{
	int i;
	printf("enter a number\n");
	scanf("%d",&i);
	
	if((i/2)*2==i)
	printf("even");
	else
	printf("odd");
	
	return 0;
}
