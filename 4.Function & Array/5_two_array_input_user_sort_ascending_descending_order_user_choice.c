/* WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include <stdio.h>

main() {
    int n1, n2, choice , i, j;

    // Input  first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Ask user for sorting choice
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Sort the first array
    for (i = 0; i < n1-1; i++) {
        for (j = 0; j < n1-i-1; j++) {
            if ((choice == 1 && arr1[j] > arr1[j+1]) || (choice == 2 && arr1[j] < arr1[j+1])) {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    // Sort the second array
    for (i = 0; i < n2-1; i++) {
        for (j = 0; j < n2-i-1; j++) {
            if ((choice == 1 && arr2[j] > arr2[j+1]) || (choice == 2 && arr2[j] < arr2[j+1])) {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }

    // Print the sorted first array
    printf("First array sorted in ");
    if (choice == 1) {
        printf("ascending order: ");
    } else {
        printf("descending order: ");
    }
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Print the sorted second array
    printf("Second array sorted in ");
    if (choice == 1) {
        printf("ascending order: ");
    } else {
        printf("descending order: ");
    }
    for (i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
}

