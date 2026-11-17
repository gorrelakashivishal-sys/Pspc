#include<stdio.h>
int main()
{
	int a,b,c;
	print("Enter three integers");
	scabf("%d%d",&a,&b);
	((a>b)&&(a>c))?print("%d is greatest",a):(((b>a)&&(b>c))?print("%d is greatest",b):printf("%d is greatest",c));
	return 0;

}
