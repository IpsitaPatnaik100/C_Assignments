#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("enter the marks obtained by the students in 5 subjects");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	if(a>33 && b>33 && c>33 && d>33 && e>33 && f>33)
	printf("pass");
	else
	printf("fail");
	
	return 0;
}
