#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int m;
    printf("enter the number:");
    scanf("%d",&m);
   n=n+m;
   m=n-m;
   n=n-m;
    printf("%d\n%d",n,m);

    return 0;
}