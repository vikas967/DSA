#include<stdio.h>
int main(){
    int r;
    printf("enter the value of r:");
    scanf("%d",&r);
    int c;
    printf("enter the value of c:");
    scanf("%d",&c);
    int arr[r][c];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){  
                                     
            scanf("%d",&arr[i][j]);
        }
     }
     int brr[r][c];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){ 
                                         
            scanf("%d",&brr[i][j]);
        }
     }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}