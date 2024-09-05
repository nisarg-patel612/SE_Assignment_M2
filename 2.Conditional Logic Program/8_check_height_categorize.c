/* WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	float height;
	printf("\n\n\n\t Enter your height in centimeters: ");
	scanf("%d", &height);
	
	if(height < 150){
		printf("\n\n\n\t Short height.\n");
	} else if(height>=150 && height <= 180) {
		printf("\n\n\n\t Average height.\n");
	} else {
		printf("\n\n\n\t Tall height.\n");
	}
}
