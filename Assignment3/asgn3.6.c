#include<stdio.h>

int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	printf("greatest number is %d",a);
	if(b>a)
	printf("greatest number is %d",b);
	if(a==b)
	printf("both numbers are equal\nthe number is %d",a);
	
	return 0;
}
