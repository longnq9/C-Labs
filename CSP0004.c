#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i,j,len,choice;
    char str[100];
    int max=-1;


    /*
    for(i=0;i<=10;i++)
    {
        printf("%d ",freg[i]);
    }
    */
    do{
    int freg[256]={0};
    printf("\nEnter the string -> ");
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
    printf("\nWould you like to continue or Press ESC to exit ");
    choice = getch();
    }while(choice !=27);

    return 0;

}
