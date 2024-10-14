#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("enter the first number ");
    scanf("%d",&a);
    int b;
    printf("enter the first number ");
    scanf("%d",&b);
    int sum=add(a,b);
        printf("%d",(a+b));
    return 0;
}