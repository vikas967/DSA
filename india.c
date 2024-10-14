#include<stdio.h>
void australia(){
    printf("australia is a looser ");
    return;
}
void england(){
    printf("england is a looser\n");
    australia();
    return;
}
void india(){
    printf("india  is a winner\n");
    england();
    return;
}
int main(){
    india();
    
    return 0;
}