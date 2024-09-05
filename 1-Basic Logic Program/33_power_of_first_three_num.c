// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int n;
	int power1,power2,power3;
	
	// Input an Integer
	printf("\n\n\t Enter an Integer: ");
	scanf("%d", &n);
	
	// Calculate the first three powers
	power1 = n;
	power2 = n * n;
	power3 = n * n * n;
	
	
	// Display the result
	printf("\n\n\t N^1 : %d\n", power1);
	printf("\n\n\t N^2 : %d\n", power2);
	printf("\n\n\t N^3 : %d\n", power3);
	
}
