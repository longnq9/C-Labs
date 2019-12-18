/**
 * C program to remove extra blank spaces from a given string
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
char * removeBlanks(const char * str);


int main()
{
    char str[MAX_SIZE];
    char * newString;

    printf("Enter any string: ");
    gets(str);

    printf("\nString before removing blanks: \n'%s'", str);

    newString = removeBlanks(str);

    printf("\n\nString after removing blanks: \n'%s'", newString);

    return 0;
}


/**
 * Removes extra blank spaces from the given string
 * and returns a new string with single blank spaces
 */
char * removeBlanks(const char * str)
{
    int i, j;
    char * newString;

    newString = (char *)malloc(MAX_SIZE);

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        /* If blank space is found */
        if(str[i] == ' ')
        {
            newString[j] = ' ';
            j++;

            /* Skip all consecutive spaces */
            while(str[i] == ' ')
                i++;
        }

        newString[j] = str[i];

        i++;
        j++;
    }
    // NULL terminate the new string
    newString[j] = '\0';

    return newString;
}
