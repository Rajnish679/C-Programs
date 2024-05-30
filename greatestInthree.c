//greatest integer using ternary operateer
#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Enter the value=");
    scanf("%d%d%d",&a,&b,&c);
    greatest= c>(a>b? a:b)? c:((a>b)?a:b);
    printf("greatest=%d",greatest);

}
