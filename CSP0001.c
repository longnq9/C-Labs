#include <stdio.h>
#include <string.h>
#include <conio.h>

void reverse_str(char str[])
{
    //your code in here
    int i, length = strlen(str);

    for (i=length-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[i]='\0';
            printf("%s ",&(str[i])+1);
        }
    }
    printf("%s",str);
}

int main()
{
    char str[20];
    int choice;
    do
    {
    printf("\nPlease input string to reverse -> ");
    gets(str);

    printf("Origin string: %s",&str);
    printf("\nReverse string: ");
    reverse_str(str);
    printf("\nDo you want to continue or press ESC to exit ");
    choice = getch();
    }while(choice!=27);
}
