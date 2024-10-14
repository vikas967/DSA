#include<stdio.h>   // print n to 1 using recursion
 void greeting(int x){
   if(x==0) return;
    greeting(x-1);
     printf("%d\n",x);             // acha tarika hain  ??????
     return;
    
 }          
int main(){ 
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   greeting(n);
  
     return 0;
}