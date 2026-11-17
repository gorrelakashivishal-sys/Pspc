#include <stdio.h>
int main()
{
    float bs,gs;
    printf("Enter Basic salary of employee :");
    scanf("%f",&bs);
    gs = bs + 0.1*bs + 0.25*bs;
    printf("Gross salary = %f",gs);
	return 0;
}
