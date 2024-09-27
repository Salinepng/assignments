//progam to solve compound interest
/*
Author:saline;
Registration no:CT102/G/24193/24;
Date:17/09/24;
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float Principal;
	float Rate;
	float Time;
	float Compound_interest;
	
	printf("enter the principal amount: \n");
	scanf("%f,&principal");
	
	printf("enter the rate of interest: \n");
	scanf("%f,&rate");
	
	printf("enter the time_value:");
	scanf("%f,&time_value");
	
	printf("enter the compound_interest:");
	scanf("%f,&compound_interest");
	
	Compound_interest=Principal*pow((1+Rate/100),Time);
	
	printf("\n Compound_interest=.4%f \n",Compound_interest);
	return 0;
}
	