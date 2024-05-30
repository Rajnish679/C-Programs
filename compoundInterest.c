#include<stdio.h>
#include<math.h>
int main()
{
    float  amount,ci,p,r,  n;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("enter the value of r=");
    scanf("%f",&r);
    printf("enter the value of n=");
    scanf("%f",&n);

    amount=p*((pow((1+r/100),n)));
    printf("amount=%0.2f\n",amount);

    ci= amount-p;
    printf("ci=%0.2f",ci);

    return 0;

}