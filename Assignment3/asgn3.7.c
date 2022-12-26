#include<stdio.h>

int main()
{
	int a,b,c,D;
	printf("enter the coefficients of the quadratic equation\n");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	printf("roots are real and distinct");
	if(D==0)
	printf("roots are real and equal");
	if(D<0)
	printf("roots are imaginary");
	return 0;
}
