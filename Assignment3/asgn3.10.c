#include<stdio.h>

int main()
{
	float sp,cp,profit,loss;
	printf("enter selling price and cost price of the product\n");
	scanf("%f %f",&sp,&cp);
	
	if(sp>cp)
	{
	profit=(sp-cp)/cp*100;
	printf("profit percentage is %f",profit);
    }
	else if(cp>sp)
	{
	loss=(cp-sp)/cp*100;
	printf("loss percentage is %f",loss);
    }
	else
	printf("neither profit nor loss");
	return 0;
}
