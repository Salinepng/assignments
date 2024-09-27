//program to print simple interest
/*
author:saline
reg no:CT102/G/24193/24
*/
#include<stdio.h>

int main()
{
    float principal,rate,time,simple_interest ;

    printf("\nEnter the Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate: ");
    scanf("%f", &rate);

    printf("Enter the Time(in years): ");
    scanf("%f", &time);

    simple_interest = (principal * time * rate) / 100.0;

    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}