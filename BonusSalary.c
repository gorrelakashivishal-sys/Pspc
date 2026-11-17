#include <stdio.h>
int main()
{
	int b,s,p;
	printf("Enter bonus percentage and salary :");
	scanf("%d",&p,&s);
	b = (p/100)*s;
	s = s + b;
	printf("Total salary = %d",s);
	return 0;
}
