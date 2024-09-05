/* Accept number of students from user. I need to give 5 apples to each student. 
How many apples are required? */

#include <stdio.h>
main()
{
	int n;
	printf("\n\n\t------------------Find the Numbers of Students----------------");
	printf("\n\n\t Enter number of students:");
	scanf("%d", &n);
	printf("\n\n\t---------------Find the total Apples(5 Apples to each Students--------------");
	printf("\n");
	printf("\n\n\t  No. of Students %d And Apples which was give is %d",n,n*5);
}
