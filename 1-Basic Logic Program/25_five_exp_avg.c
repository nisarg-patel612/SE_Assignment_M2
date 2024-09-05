#include <stdio.h>

int main() {
    float expense1, expense2, expense3, expense4, expense5;
    float total_expense, average_expense;

    // Input expenses
    printf("Enter expense 1: ");
    scanf("%f", &expense1);

    printf("Enter expense 2: ");
    scanf("%f", &expense2);

    printf("Enter expense 3: ");
    scanf("%f", &expense3);

    printf("Enter expense 4: ");
    scanf("%f", &expense4);

    printf("Enter expense 5: ");
    scanf("%f", &expense5);

    // Calculate total and average expense
    total_expense = expense1 + expense2 + expense3 + expense4 + expense5;
    average_expense = total_expense / 5;

    // Display results
    printf("\nTotal Expense: %.2f\n", total_expense);
    printf("Average Expense: %.2f\n", average_expense);

    return 0;
}

