/*
Name : Shaikh Ayaan noor mohammad
UIN - 251P002
CLASS - COMP 1
DIV - C
*/

#include <stdio.h>
int main() {
    int num,mod;
    printf("enter a number");
    scanf("%d", &num);
    mod=num % 2;
    (mod > 0 ? printf("The given number is odd"):printf("The given number is even"));
    return 0;
}
