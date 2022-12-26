#include<stdio.h>

int main()
{
	int i;
	printf("enter a number");
	scanf("%d",&i);
	
	if(i>0)
	printf("positive");
	if(i<0)
	printf("negative");
	if(i==0)
	printf("zero");
	return 0;
}
