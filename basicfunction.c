
#include<stdio.h>
void greet(){
    printf("good morning");
    printf("\nhow are you\n"); 
    return;// means function ko khatam kar dena
}
int main(){// code always start from main function 
     greet();// ye pehle greet dekhega uske baad ye greet ke andar jo likha hoga usk print karega iske baad code khatam ho jayega fir second greet ka kam chalega 
     greet();
    return 0;
}