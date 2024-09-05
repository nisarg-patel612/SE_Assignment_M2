// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>
main() 
{
    int n , i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        double term = (double)i / (i + 1);
        if (i % 2 == 0) {
            sum -= term; 
        } else {
            sum = sum + term; 
        }
    }

    printf("The result of the series is: %.2f\n", sum);

}


