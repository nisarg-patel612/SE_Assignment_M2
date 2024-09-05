// WAP to find factorial using recursion

#include <stdio.h>

// function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the recursive function to calculate factorial
    int result = factorial(num);
    
    // Output the result
    printf("Factorial of %d is %d\n", num, result);
}

