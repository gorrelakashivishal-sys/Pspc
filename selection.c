#include<stdio.h>
int main()
{
	int a[10],i,j,n,min,temp;
	peintf("enter n o.of array values : ");
	scanf("%d",&n);
	printf("enter %d elerments to array : ",n);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	return 0;
}
