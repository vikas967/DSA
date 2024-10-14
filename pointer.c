#include<stdio.h>
int main(){
    int x=90;
    int *z= &x;
    printf("%d\n",x);
    printf("%p\n",z);
    printf("%d\n",*z);
}