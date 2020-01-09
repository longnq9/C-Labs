#include <stdio.h>
#include <string.h>
#include <conio.h>
int isLower(char c)
{
    return (c>='a'&&c<='z')?1:0;
}
int isUpper(char c)
{
    return (c>='A' && c<='Z')?1:0;
}
int toLower(char c)
{
    return c+=32;
}
int toUpper(char c)
{
    return c-=32;
}

int main()
{
    //declare variable
    char str[100];
    int i,n,key;

    do{
    //input the string
    printf("\nInput String: ");
    gets(str);

    n = strlen(str);

    for(i=0;i<=n;i++)
    {
        //if character is lower then upper and vice versa
        if(isLower(str[i]) == 1)
            str[i] = toUpper(str[i]);
        else if (isUpper(str[i])== 1)
                 str[i] = toLower(str[i]);
    }

    //for(i = 0; i < n / 2; i++){
    //    char temp = str[i];
    //    str[i] = str[n - i - 1];
    //    str[n - i - 1] = temp;
    //}
    printf("Reverse string: %s",strrev(str));
    //getchar();
    printf("\nDo you want to continue or Press ESC to exit;");
    key = getch();
    }while(key!=27);
    return 0;


}
