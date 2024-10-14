#include<stdio.h>
int main(){
   int arr[2][3]={{1,2,4},{3,4,7}};
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         printf("%d ",arr[i][j]); 
    }
    printf("\n");
   }
    
    return 0;
}