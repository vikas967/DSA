#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        int s=0;
        for(int j=0;j<3;j++){
            s+arr[i][j];
            if(max<s+arr[i][j]){
                max=s+arr[i][j];
            }
            
            }
           
    }
     printf("%d",max);

    return 0;
}