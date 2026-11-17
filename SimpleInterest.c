#include <stdio.h>
int main()
{
    float s,p,t,r;
    printf("Enter principle amount, time in months, rate of interest");
    scanf("%f%f%f",&p,&t,&r);
    s = p*t*r;
    print("Simple Interest = %f",s);
	return 0; 
}
