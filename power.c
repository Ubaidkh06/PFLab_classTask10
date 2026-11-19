#include <stdio.h>

int exp(int n, int power);

int main(void)
{
    // prototypes:
    int exp(int n, int power);

    int num;
    int power;

    printf("Input number: ");
    scanf("%d", &num);
    printf("Input power: ");
    scanf("%d", &power);

    printf("Answer: %d", exp(num, power));

    return 0;
}

int exp(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return n * exp(n, power - 1);
    }
}
