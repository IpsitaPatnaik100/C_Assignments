#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the sides of a triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a+b>c && b+c>a && c+a>b)
	printf("valid triangle");
	else
	printf("invalid triangle");
	return 0;
}
