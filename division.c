#include<stdio.h>
int main()
{
	int a,b;
	float r;
	printf("Enter two integers :");
	scanf("%d%d",a,b);
	r=(float)a/b;
	printf("division of %d & %d = %d",a,b,r);
	return 0;
}
