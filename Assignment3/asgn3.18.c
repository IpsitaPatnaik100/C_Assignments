#include<stdio.h>

int main()
{
	int i;
	printf("enter the month number");
	scanf("%d",&i);
	
	if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
	printf("number of days =31");
	if(i==4 || i==6 || i==9 || i==11)
	printf("number of days =30");
	if(i==2)
	printf("number of days =28");
	return 0;
}
