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
    if (num1 == num2)
        return (1);
    if (num1 % num2 == 0 && num2 > 0)
        return (0);
    return (aprime(num1, num2 - 1));
}

