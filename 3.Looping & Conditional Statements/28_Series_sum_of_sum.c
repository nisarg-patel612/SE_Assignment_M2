// 1 2 3 6 9 18 27 54...

#include <stdio.h>
main() {
    int n , i , term1 = 1, term2 = 2, term3 = 3 ;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) 
	{
        printf("Number of terms should be positive.\n");
        return 1;
    }

    
    printf("%d ", term1);
    if (n > 1) printf("%d ", term2);
    if (n > 2) printf("%d ", term3);

    // Generate remaining terms
    int prev_term = term3;
    for (i = 4; i <= n; i++) 
	{
        int current_term = prev_term * 3;
        printf("%d ", current_term);
        prev_term = current_term;
    }

    printf("\n");
}

