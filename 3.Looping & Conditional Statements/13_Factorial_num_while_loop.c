// calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("\n\n\tEnter any Number : ");
	scanf("%d", &n);
	i=n;
	while(i > 0)
	{
		fact= fact * i;
		i--;
	}
	printf("\n\n\tFactorial of %d is = %d", n, fact);
}
























//#include<stdio.h>
//main()
//{
//	int i,n,factorial;
//	
//	printf("\n\n\n\t Enter a Factorial Number: ");
//	scanf("%d", &n);
//	
//	i = 1;
//	
//	while(i<=n){
//		factorial = factorial * i;
//		printf("\n\n\n\t Number : %d  Fact : %d",i,factorial);
//		i = i + 1;
//	}
//}




