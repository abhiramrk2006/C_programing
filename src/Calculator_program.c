#include <stdio.h>
 
int main(void) {
    char operatior = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
 
    printf("Simple Calculator\n");

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operatior);
  
    printf("Enter the second number: ");
    scanf("%lf", &num2);
 
    switch (operatior) {
        case '+':
            printf("Result: %.2f\n", num1 + num2 );
            break;
        case '-':
            printf("Result: %.2f\n", num2 - num2 );
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2 );
            break;
        case '/':
            if (num2 != 0.0)
                printf("Result: %.2f\n", num1 / num2 );
            else
                printf("Error: division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
 
    return 0;
}
