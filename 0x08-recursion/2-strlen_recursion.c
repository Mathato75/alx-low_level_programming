#include "main.h"

int _strlen_recursion(char* s)
{
    int longit = 0;
        if (*s)

    {
        longit++;

        longit += _strlen_recursion(s + 1);
    }
    else

    return (longit);
}

