// WAP to accept 5 students name and store it in array 

#include<stdio.h>
main()
{
	//char student_name[5];
	char students_name[5][50];
	int i;
	
	// input students names
	printf("\n\n\t--------------------------------Students Name---------------------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter Student Name: ");
		scanf("%s", students_name[i]);
	}
	printf("\n\n\t-----------------------------Students Names are:------------------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t %s", students_name[i]);
	}
	
}
