#include <stdio.h>

// Function to find the max number in an array
int findMax(int arr[], int n) {
    int max = arr[0],i; 
    
    // Loop the array to find the max number
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max; // Return the maximum number
}

main() 
{
    int n,i;
    
    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Accept the array elements from the user
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and print the maximum number using the findMax function
    int maxNumber = findMax(arr, n);
    printf("The maximum number is: %d\n", maxNumber);
    
}

