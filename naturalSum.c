#include <stdio.h>

int main(void)
{
	// prototypes
	int sum(int n);
	
	int num;
	
	printf("Input natural number: ");
    scanf("%d", &num);
    printf("sum of the natural numbers is: %d", sum(num));
}

int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + sum(n-1);
	}
}


