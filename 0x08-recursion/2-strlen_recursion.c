#include "main.h"
/*

//we are trying this 

int _strlen_recursion(char *s)

{
    int a = 0;

    if(*s)
    {
        a++;

        a += _strlen_recursion(s + 1);

    }
    else
    {
        return (a);
  */
int _strlen_recursion(char* s)
{
    int longit = 0;

    if (*s)

    {
        longit++;

        longit += _strlen_recursion(s + 1);
    }
    
    return (longit);
}



