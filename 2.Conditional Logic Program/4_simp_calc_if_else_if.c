/* WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Prompt user to input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Conditional statements to perform the chosen operation
    if (operator == '+') {
        printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}


