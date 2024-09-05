// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>
main()
{
	int width,length,height,calculatesurfacearea;
	
	printf("Enter the width of the rectangular prism:");
	scanf("%d%d%d", &width,&height,&length);
	
	
	calculatesurfacearea = 2*(width*length + height * length + height * width);
	printf("The calculatesurfacearea of the rectangular prisom is: %d", calculatesurfacearea);
}
