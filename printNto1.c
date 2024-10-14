#include<stdio.h>   // print n to 1 using recursion
 void greeting(int x){
   if(x==0) return;
   printf("%d\n",x);
    greeting(x-1);
     return;
    
 }          
int main(){ 
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   greeting(n);
  
     return 0;
}