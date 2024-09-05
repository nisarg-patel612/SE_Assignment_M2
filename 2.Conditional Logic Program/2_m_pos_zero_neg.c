/* Write a C program to read the value of an integer m and display the value of
m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */

#include <stdio.h>
main()

{
	int m;
	
	// user to inut an integer
	printf("\n\n\n\t Enter an integer value of m: ");
	scanf("%d", &m);
	
	// Determine the value of m and display the corresponding output
	if(m>0)
	{
		printf("\n\n\t The value of m is 4\n");
	} else if (m==0) {
		printf("\n\n\t The value of m is 0\n");
	} else {
		printf("\n\n\t The value of m is -1\n");
	}
}
