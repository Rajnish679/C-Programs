#include<stdio.h>
//#include<conio.h>
int main(){
    int n,i,j;
    printf("enter table=");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        //table=table*i;
        for(j=1;j<=n;j++);{

         printf("%d*%d=%d", j,i,i*j);
    }
    printf("\n");

    }

    return 0;
}