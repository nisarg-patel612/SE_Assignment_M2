// Perform 2D matrix array

#include<stdio.h>
main()
{
	int rows,columns,i,j;
	
	
	// Getting the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    // Input elements in the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("Enter element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying the matrix
    printf("\nThe matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
	
}
