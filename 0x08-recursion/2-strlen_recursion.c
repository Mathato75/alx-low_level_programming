#include main.h

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
    }
}


