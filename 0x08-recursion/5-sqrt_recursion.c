#include "main.h"
/*initinilizing the numbers */

int actual_sqrt_recursion(int num1, int num2);

int _sqrt_recursion(int num1)
{
    if (num1 < 0)
        return (-1);
    return (actual_sqrt_recursion(num1, 0));
}

/*we are now going to try */
int actual_sqrt_recursion(int num1, int num2)
{
    if (num2 * num2 > num2)
        return (-1);
    if (num2 * num2 == num1)
        return (num2);
    return (actual_sqrt_recursion(num1, num2 + num2));
}

