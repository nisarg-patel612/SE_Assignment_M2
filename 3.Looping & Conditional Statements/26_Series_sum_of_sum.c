// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
main() 
{
    int n, i, j, totalsum=0, sum=0;
    printf("\n\n\tEnter a Number of Series : ");
    scanf("%d", &n);

    if (n > 0) 
	{
        for (i = 1; i <= n; i++) 
		{
            for (j = 1; j <= i; j++) 
			{
                sum =sum + j; 
            }
            totalsum =totalsum + sum; 
        }
        
        printf("\n\n\t(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)");
        printf("\n\n\tThe Sum of the series 1 to %d is: %d", n, totalsum);
    } 
	else 
	{
        printf("\n\n\tPlease enter a positive integer.\n");
    }
}

