#include<stdio.h>
int main(){
   
    int m;
    printf("enter the row of 1'st matrix ");
    scanf("%d",&m);
    int n;
    printf("enter the coloumn of 1'st matrix ");
    scanf("%d",&n);
     int arr[m][n];
    printf("enter the 1st matrix elements" );
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){                      // it's input 
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("enter the row of 2'st matrix ");
    scanf("%d",&p);
    int q;
    printf("enter the coloumn of 2'st matrix ");
    scanf("%d",&q);
    int brr[p][q];
     printf("enter the 2nd matrix elements" );
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){                      // it's input 
          scanf("%d",&brr[i][j]);
        }
    }
if(n!=p){
    printf("the multiplication is not possible ");
}
else{
     int res[m][q];
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]  =  arr[i][k]*brr[k][j]+res[i][j];                   // halka sa doubt 
            }
        }
     }
printf("\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
}
    return 0;
}