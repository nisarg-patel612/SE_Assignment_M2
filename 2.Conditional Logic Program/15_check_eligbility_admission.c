/* Write a C program to determine eligibility for admission to a professional
course based on the following criteria*/

#include<stdio.h>
main()
{
	int physics,chemistry,maths,total,totalMathsPhysics;
	
	// Input marks for physics , chemistry & Mathematics
	
	printf("\n\n\n\t Enter a Marks in Physics: ");
	scanf("%d",&physics);
	
	printf("\n\n\n\t Enter a Marks in chemistry: ");
	scanf("%d",&chemistry);
	
	printf("\n\n\n\t Enter a Marks in maths: ");
	scanf("%d",&maths);
	
	
	total = physics + chemistry + maths;
	
	totalMathsPhysics = maths + physics;
	
	// Display total marks
	printf("\n\n\n\t Total Marks of Maths , Physics and Chemistry: %d.\n", total);
	printf("\n\n\n\t Total Marks of Maths and Physics: %d.\n", totalMathsPhysics);
	
	if ((maths >= 65 && physics >= 55 && chemistry >= 50 & total >= 190) || totalMathsPhysics >= 140)
	{
		printf("\n\n\n\t The candidate is Eligible for admission.\n");
	} else {
		printf("\n\n\n\t The candidate is not Eligible for admission.\n");
	}
}
