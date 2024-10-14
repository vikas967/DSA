#include<stdio.h>   // print 1  to n using recursion
 void greeting( int x,int n){
    
   if(x>n) return;
   printf("%d\n",x);
    greeting(x+1,n);
     return;
    
 }          
int main(){ 
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   greeting(1,n);
  
     return 0;
}