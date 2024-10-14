#include<stdio.h>
int factorial(int x){
    int fact=1;                    // this is factorial function 
    for(int i=2;i<=x;i++){
    fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){      // this is a combination function
     int ncr=factorial(n)/(factorial(r)*factorial(n-r)) ;
     return ncr;
}
int main(){
    int n;
    printf("enter the n;");
    scanf("%d",&n);
   
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){// for spaces 
            printf(" "); 
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}