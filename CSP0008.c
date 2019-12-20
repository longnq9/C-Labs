#include<string.h>
#include<stdio.h>
#include<conio.h>
#define MAX 100

//This function will be count character apprear in string.
void onetime(char str[])
{
    //declare variable
    int i,j, dem = 0;
    char kytu;
    for(i=0;i<strlen(str);i++)
    {
        kytu=str[i];
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]==kytu)
            {
                dem = dem + 1;
            }
        }
        if(dem==1)
        printf("%c\t",str[i]);
        dem =0;
    }
}

int main()
{

    //int i,dem=0;
    //int x,count = {0};
    int choice;
    do
    {
    char str[100];
    printf("\nPlease enter a string: ");
    gets(str);

    printf("Found characters: ");
    onetime(str);

    /*
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            x = str[i]-'a';
            count[x]++;
        }
        i++;
    }

    for(i=0;i<26;i++)
            printf("Found character %c appear %d times.\n",i +'a',count[i]);

    */
    printf("\nDo you want to continue or Press Esc to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;

}
