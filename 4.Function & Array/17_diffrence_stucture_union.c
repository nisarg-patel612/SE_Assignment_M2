#include<stdio.h>

struct Student   //1. struct name
{
	int rollno;      //2. struct members
	char sname[30];
	int sub[3];
	float per;
	char grade;
}stud[3];

main()
{
	int i, tot=0, s;
	
	for(s=0;s<3;s++)
	{
		printf("\n\n\t Enter details for Student[%d] -----", s+1);
		printf("\n\n\t Enter a Rollno : ");
		scanf("%d",&stud[s].rollno);
		printf("\n\n\t Enter Student's Name : ");
		scanf("%s",&stud[s].sname);
	    tot=0;
		for(i=0;i<3;i++)
		{
			printf("\n\n\t Enter marks for sub[%d] : ",i+1);
			scanf("%d",&stud[s].sub[i]);
			tot=tot+stud[s].sub[i];
		}
		stud[s].per=tot/3;
	
		if(stud[s].per>=70)
		{
			stud[s].grade='A';
		}
		else if(stud[s].per>=60)
		{
			stud[s].grade='B';
		}
		else if(stud[s].per>=50)
		{
			stud[s].grade='C';
		}
		else if(stud[s].per>=40)
		{
			stud[s].grade='D';
		}
		
		else
		{
			printf("\n\n\t Failed.");
		}
	}
	
	for(s=0;s<3;s++)
	{
		printf("\n\n\t -----------------------------");
		printf("\n\n\t Student-%d", s+1);
		printf("\n\n\t Rollno : %d",stud[s].rollno);
		printf("\n\n\t Name : %s",stud[s].sname);
		printf("\n\n\t Per : %.2f",stud[s].per);
		printf("\n\n\t Grade : %c",stud[s].grade);
	}
}
