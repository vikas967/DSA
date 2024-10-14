#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,8},{9,6,5},{4,5,6}};
    int max=arr[0][0];
    for(int i=0;i<=2;i++){
        for( int j=0;j<=2;j++){
        if(max<arr[i][j]) {
            max=arr[i][j];
          
        }
         
    }
    }
    printf(" the maximum  is %d  ",max);
    return 0;
}