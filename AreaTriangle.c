#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter Base length and Height");
	scan("%f%f",&a,&b);
	c = 0.5*a*b;
	print("Area of triangle = %f",c);
	return 0;
}
