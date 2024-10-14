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
        for(int j=0;j<c;j++){                      // it's input 
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){                // it is for swaping 
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){                      // print of transpose  
          printf("%d",arr[i][j]);
        }
         printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i++){
        int j=0;
        int k=r-1;
        while(j<k){
        int temp=arr[i][j];                      // it is for swaping of each rows
        arr[i][j]=arr[j][k];
        arr[j][k]=temp;
        j++;
        k--;
        }

    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){                      // print of 90 rotate   
          printf("%d",arr[i][j]);
        }
         printf("\n");
    }
    return 0;
}
