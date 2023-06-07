#include main.h

int _strlen_recursion(char* s)
{
    int string1_length = string_length(string1);

    // print out the calculated length to verify it is 5
    printf("length: %d\n", string1_length);

    return 0;

    int string_length(char*s)
    {
        
        if (*string == '\0') return 0;
        else return 1 + string_length(string + 1);
    }

}

