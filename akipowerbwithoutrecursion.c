#include<stdio.h>
int power(int a,int b){
    int x=1;
    for(int i=1;i<=b;i++){
    x=x*a;
    }
    return x;
    
}
int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
     int b;
    printf("enter the value of b ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;

}