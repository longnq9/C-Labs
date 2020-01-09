#include<stdio.h>
#include<string.h>
#include<conio.h>
//This function check character or not
int isAlpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}
//This function upper character
int isUpper(char c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
char isLower(char c)
{
    if (isUpper(c) == 1)
        return c += 32;
    return c;
}

int main()
{
    //Declare variable
    char str[100];
    int freq[26]={0};
    int i,len;

    //Input string
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    //Count the number of the appearance of letters
    for(i = 0; i < len; i++)
    {
        if (isAlpha(str[i]) == 1)
        {
            if (isUpper(str[i]) == 1)
                str[i] = isLower(str[i]);
            freq[str[i] - 'a']++;
        }
    }

    //Output result
    for(i = 0; i < 26; i++)
        if (freq[i])
            printf("\t%c: %d\n",i + 'a',freq[i]);
    getchar();
    return 0;
}
