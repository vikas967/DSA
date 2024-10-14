#include<stdio.h>
int main(){
    int factorial(int n){
        if(n==0 ||n==1) return 1;
        return n*factorial(n-1);
    }
    int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
    }
    int n;
    printf("enter the number of lines ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            printf(" ");

        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj );
        }
        printf("\n");
    }
    return 0;
}