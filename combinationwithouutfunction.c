
#include<stdio.h>
int main(){
    int n;
    printf("enter the n;");
    scanf("%d",&n);
    int r;
    printf("enter the r;");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(int i=1;i<=n;i++){
        nfact=nfact*i;
    }
     for(int i=1;i<=r;i++){
        rfact=rfact*i; //         this code is without using the function when we use the function this code is short
    }
     for(int i=1;i<=(n-r);i++){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact) ;
    printf("%d",ncr);
    return 0;
}