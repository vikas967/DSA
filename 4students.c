#include<stdio.h>
int main(){
    int n;
    printf("enter the number of students: ");
    scanf("%d",&n);
    int arr[n][3];
     for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){                             
            scanf("%d",&arr[i][j]);
        }
     }
     printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}