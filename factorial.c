#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter max value");
	scanf("&d",n);
	if(n = 0) {
		printf("1");
	}
	i = 1;
	while (i < n) {
		i *= i + 1 ;
	}
	printf("%d",i);
	return 0;
}


