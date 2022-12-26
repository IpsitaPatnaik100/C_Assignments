#include<stdio.h>

int main()
{
	int a,b,c,x;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	x=a>c? a>b?a:b : c>b?c:b;
	printf("greatest number is %d",x);
	return 0;
}
