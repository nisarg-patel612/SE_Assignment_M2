// Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\tEnter rectangle length & breath:");
	scanf("%d %d", &a,&b);
	c = 2 * (a + b);
	printf("\n\n\tlength of rectangle is %d and breath of rectangle is %d", a,b);
	printf("\n\n\tCircumference of rectangle is %d", c);
}
