#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter sides of triangle");
	scanf("%d%d%d",a,b,c);
	if(a == b && a == c) {
		printf("Given triangle is equilateral");
	}
	else if(a != b && a != c) {
		printf("You are not elgible to vote");
	}
	else {
		printf("Given triangle is isoceles")
	}
	return 0;
}


