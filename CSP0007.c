#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int i,choice;

    do
    {
    int k=0;
    char str[100];
    printf("\nPlease enter the string: ");
    gets(str);

    for(i=0;i<=strlen(str);i++)
    {
        str[i] = str[i+k];
        //Check if character[i] is space or tab
        if(str[i]==' '||str[i]=='\t')
        {
            k++;
            i--;
        }
    }
    printf("The string after removing blank: %s",str);
    printf("\nDo you want to continue or Press ESC to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;
}
