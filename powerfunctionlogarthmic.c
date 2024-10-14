 #include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    
    int x=power(a,b/2);
    if(b%2==0){                  // this is for even power 
         return x*x;
    }
   else{                    // this is for odd power
     return x*x*a;
   }
    
}    
    


int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
     int b;
    printf("enter the value of b ");
    scanf("%d",&b);
   int q= power(a,b);
   printf("%d",q);
    return 0;

}