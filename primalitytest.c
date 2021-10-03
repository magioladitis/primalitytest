#include <stdio.h>

int main()
{
    int a;
	printf("Give a number:");
    scanf("%d",&a);
    int i=2;
    int divisor=2;
    while(divisor!=0 && i<a)
    {
		divisor=a%i;
        i++;
    }
	if (i==a)
	{
		printf("Prime");
	}
	else
	{
		printf("Composite");
	}
    return 0;
}
