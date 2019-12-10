#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i,j,len;
    char str[100];
    int max=-1;

    int freg[256]={0};
    /*
    for(i=0;i<=10;i++)
    {
        printf("%d ",freg[i]);
    }
    */

    printf("Enter the string -> ");
    fflush(stdin);
    gets(str);
    strlwr(str); //lower string

    len = strlen(str);

    printf("Times of appearance for each character: \n");
    for(i=0;i<len;i++)
    {
        printf("char: %c\t",str[i]);
        freg[str[i]]++;
        printf("freg: %d\t\n",freg[str[i]]);
    }
    for(i=0;i<len;i++)
    {
        if(max<freg[str[i]])
        {
            max = freg[str[i]];
        }
    }
    printf("Characters that appear the most: \n");
    for(i=0;i<256;i++)
    {
        if(max==freg[i])
        {
            printf("Char %c: %d\n",i,freg[i]);
        }
    }

    return 0;

}
