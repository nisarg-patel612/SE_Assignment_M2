// Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int marks;
	
	printf("\n\n\n\t Enter Your Marks: ");
	scanf("%d", &marks);
	
	if(marks>=50){
		printf("\n\n\n\t %d Congrulation You have passed this exam.\n", marks);
	} else {
		printf("\n\n\n\t Sorry you have fail this exam.\n", marks);
	}
}
