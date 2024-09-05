// Accept 5 names from the user at run time

#include<stdio.h>
main()
{
	char names[5][100];
	int i;
	
	for (i=0;i<5;i++){
		printf("Enter Name: ");
		scanf("%s", &names[i]);
	}
	
	for (i=0;i<5;i++){
		printf("%s\n", names[i]);
	}
}
