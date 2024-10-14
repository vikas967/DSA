#include<stdio.h>
int main(){
    int r;
    printf("enter the number of row");
    scanf("%d",&r);
    printf("\n");
    int c;
    printf("enter the number of coloumns");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the no of elements" );
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
       
        }
         printf("\n");
    }
   
    return 0;
}