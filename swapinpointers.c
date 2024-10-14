#include<stdio.h>

    void swap(int* x,int* y){
        int temp;
        temp=*x;// temp=2
        *x=*y;// a = 9
    *y=temp;//  *y =2  b=2
    }
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}