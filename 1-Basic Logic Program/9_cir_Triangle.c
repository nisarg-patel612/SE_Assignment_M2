// Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>
main()
{
	int x,y,z,perimeter;
	printf("Enter a value of trinagle:");
	scanf("%d%d%d", &x,&y,&z);
	perimeter = x + y + z;
	printf("The Circumference(perimeter) of the triangle: %d", perimeter);
}
