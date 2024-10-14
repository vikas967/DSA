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
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}