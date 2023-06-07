#include "main.h"

int actual_prime(int num1, int num2);


int is_prime_number(int num1)
{
    if (num1 <= 1)

        return (0);

    return (actual_prime(num1, num1 - 1));
}


int actual_prime(int num1, int num2)
{
    if (num1 == 1)

        return (1);

    if (num1 % num2 == 0 && num2 > 0)

        return (0);

    return (actual_prime(num1, num2 - 1));
}
