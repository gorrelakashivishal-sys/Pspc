#include <stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers");
	scanf("%f%f",&a,&b);
	printf("%f < %f = %f\n",a,b,a<b);
	printf("%f > %f = %f\n",a,b,a<b);
	printf("%f <= %f = %f\n",a,b,a<b);
	printf("%f >= %f = %f\n",a,b,a<b);
	printf("%f == %f = %f\n",a,b,a<b);
	printf("Note : The result of above if \'1\' it is true and if \'0\' it is false");
	return 0;
}
