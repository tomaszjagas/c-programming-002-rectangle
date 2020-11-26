/*******************************************************
* Description: Calculate perimeter and area of rectangle
********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaration
	double height = 4.39;
	double width = 5.43;
	double perimeter = 0.0;
	double area = 0.0;

	//calculation
	perimeter = 2 * (height + width);
	area = height * width;

	//console output
	printf("rectangle height: %.2f\n", height);
	printf("rectangle width: %.2f\n", width);
	printf("rectangle perimeter: %.2f\n", perimeter);
	printf("rectangle area: %.2f\n", area);

	return 0;
}