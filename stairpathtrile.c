#include<stdio.h>
int stair(int n){
   if(n<=2) return n;
  if(n==3) return 4;
    return (stair(n-1)+stair(n-2)+stair(n-3));
    }
int main(){
    int n;
    printf("enter the number :");//                  
    scanf("%d",&n);
    int s=stair(n);
    printf("%d",s);
    return 0;
}