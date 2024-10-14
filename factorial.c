#include<stdio.h>
int factorial(int x){
   if(x==1 || x==0) return 1;    // base case  x==0 without using of this we cant get the value of 0!.
    return x*factorial(x-1);
    

}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d", fact);
    return 0;

}