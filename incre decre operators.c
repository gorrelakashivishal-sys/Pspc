#include<stdio.h>
int main()
{
	int a;	
	printf("Enter one integer :");
	scanf("%d",&a);
	printf("%d++=%d",a,a++);
	printf("++%d=%d",a,++a);
	printf("%d--=%d",a,a--);
	printf("--%d=%d",a,--a);		
	return 0;

}
