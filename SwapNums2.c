#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 integers")
	scanf("%d,%d",&a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	print("a = %d,b = %d",a,b);
	return 0;
}

