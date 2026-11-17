#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two integers :");
	scanf("%d%d",&a,&b);
	printf("(%d > %d) && (%d > %d) = %d\n",a,b,a,c,(a>b)&&(a>c));
	printf("(%d > %d) || (%d > %d) = %d\n",a,b,a,c,(a>b)||(a>c));
	printf("!(%d > %d) = %d\n",a,b,!(a>b));
	printf("Note : The result of above if \'1\' it is true and if \'0\' it is false");	
	return 0;

}
