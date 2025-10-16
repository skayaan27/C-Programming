#include<stdio.h>

int main(){
    int a,b;
    char op;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op){
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            if(b != 0)
                printf("%d / %d = %.2f\n", a, b, (float)a/b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}