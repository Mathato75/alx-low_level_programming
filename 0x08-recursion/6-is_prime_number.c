#include "main.h"

int prime(int num1, int num2);

int is_prime_number(int num1)
{
    if (num1 <= 1)

        return (0);

    return (aprime(num1, num1 - 1));
}

int prime(int num1, int num2)
{
    if (i == 1)
        return (1);
    if (n % i == 0 && i > 0)
        return (0);
    return (aprime(n, i - 1));
}

