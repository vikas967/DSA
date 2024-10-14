#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=1,b,sum;
    for(int i=1;i<=n;i++){
sum=a+b;                    
a=b;
b=sum;
printf(" %d",sum);
    }
    return 0;
}