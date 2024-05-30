//calculate the simple interest
#include<stdio.h>

    int main()
    {
          float si,p,r,t;
        printf("enter the value of p=");
        scanf("%f",&p);
        printf("Enter the value of r=");
        scanf("%f",&r);
        printf("Enter the value of t=");
        scanf("%f",&t);
        si=(p*r*t)/100;
        printf(" si= %0.2f",si);
        return 0;

    }