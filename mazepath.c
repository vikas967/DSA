#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec ) return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec); // only right calls 
    }
    if(cc==ec){
        downways += maze(cr+1,cc,er,ec); // only down calls
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
         downways += maze(cr+1,cc,er,ec);
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
    int ways=maze(1,1,n,m);              // kyoki initially vo 1 pe hi h khatam n,m pe hoga 
    printf("%d",ways);
    return 0;
}