/* Pattern - 6 - pending
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<stdio.h>
main()
{
	int r,c;
	printf("\n\n\t");
	r=1;
	while(r<=6)
	{
		c=1;
		while(c<=r)
		{
			printf("* ");
			c++;
		}
		printf("\n\t");
		r++;
	}
	r=5;
	while(r>=1)
	{
		c=1;
		while(c<=r)
		{
			printf("* ");
			c++;
		}
		printf("\n\t");
		r--;
	}
}
