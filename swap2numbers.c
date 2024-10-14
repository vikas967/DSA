#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int m;
    printf("enter the number:");
    scanf("%d",&m);
    int temporary;
    temporary=n;
    n=m;
    m=temporary;
    printf("%d\n%d",n,m);

    return 0;
}