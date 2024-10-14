#include<stdio.h>
int maze(int n,int m){                            // reverse socho hame nm se start krna h aur 11 pe jana h 
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += maze(n,m-1);
    }
    if(m==1){
        downways += maze(n-1,m);
     }
    if(n>1 && m>1){
         rightways += maze(n,m-1);
          downways += maze(n-1,m);
    }
    
    
   
    int totalways=rightways+downways;
    return totalways;
}
int main(){
     int n;
    printf("enter the no of rows: ");
    scanf("%d",&n);
     int m;
    printf("enter the no of coloumns: ");
    scanf("%d",&m);
    int ways=maze(n,m);              // kyoki initially vo 1 pe hi h khatam n,m pe hoga 
    printf("%d",ways);
    return 0;
}