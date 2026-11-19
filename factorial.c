#include <stdio.h>

int factorial(int n);

int main(void) {
    int num;

    printf("Input number for fatorial: ");
    scanf("%d", &num);

    printf("factorial: %d", factorial(num));

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
