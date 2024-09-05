/* WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */

#include <stdio.h>

#define MAX 10 // Define maximum size of matrices

main() {
    int rows, cols , choice, matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX] , i, j , k;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the menu
    printf("Choose the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Addition
            printf("Result of Addition:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            break;

        case 2: // Subtraction
            printf("Result of Subtraction:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            break;

        case 3: // Multiplication
            printf("Enter the number of columns for the second matrix (for multiplication): ");
            int cols2;
            scanf("%d", &cols2);
            
            // Ensure valid matrix dimensions for multiplication
            if (cols != rows) {
                printf("Error: Number of columns of the first matrix must be equal to number of rows of the second matrix.\n");
                return 1;
            }

            // Input second matrix for multiplication
            int matrix2B[MAX][MAX];
            printf("Enter elements of the second matrix for multiplication:\n");
            for (i = 0; i < cols; i++) {
                for (j = 0; j < cols2; j++) {
                    scanf("%d", &matrix2B[i][j]);
                }
            }

            printf("Result of Multiplication:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols2; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < cols; k++) {
                        result[i][j] += matrix1[i][k] * matrix2B[k][j];
                    }
                }
            }
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Display the result matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

