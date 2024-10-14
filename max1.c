#include<stdio.h>
int main(){
     int arr[3][4]={{1,1,0,1},{1,0,0,0},{1,1,1,1 }};
     int maxcount=0;
     
     for(int i=0;i<3;i++){
        int count = 0;
       
        for(int j=0;j<4;j++){             // it's calculated the 
            if(arr[i][j]==1){             // no of one's present in  a single row 
             count++;
             
            }
        }
        if(maxcount<count ){
            maxcount=count;
          
        }
       
     }
     printf("the maximum number of 1's is %d   ",maxcount);
    return 0;
}