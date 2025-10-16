/*
Name : Shaikh Ayaan Noor Mohammad
UIN - 251P002
CLASS - COMP 1
DIV - C
*/

#include <stdio.h>
int main() {
    int P, C, M;
    printf("enter physics marks");
    scanf("%d", &P);
    printf("enter chemistry marks");
    scanf("%d", &C);
    printf("enter maths marks");
    scanf("%d", &M);
    (P+C+M % 3 >= 50)?printf("student is eligible"):printf("not eligible");
    return 0;
}
