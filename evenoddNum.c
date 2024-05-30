//using ternary operater to print even or odd num 
#include<stdio.h>
int main(){
    int n,num;
    printf("Enter n=");
    scanf("%d",&n);
    num=(n%2==0)? printf("Even"):printf("odd");

    return 0;
}