#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void Bin2Dec()
{
    long int bin, dec=0, i=0;

    printf("Enter Binary Number: ");
    scanf("%d",&bin);

    while(bin!=0)
    {
        dec = dec + (bin%10)*pow(2,i);
        i++;
        bin = bin/10;
    }
    printf("Decimal Number: %d\n",dec);
}
void Oct2Dec()
{
    long int oct, dec = 0, i=0;

    printf("Enter Octal Number: ");
    scanf("%d",&oct);

    while(oct!=0)
    {
        dec = dec + (oct%10)*pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("Decimal Number: %d\n", dec);
}
void Hex2Dec()
{
    char hex[100];
    long int dec = 0;
    //Declare base
    int base = 1;

    printf("Enter Hexadecimal Number: ");
    scanf("%s",&hex);

    for(int i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            dec = dec + (hex[i]-48)*base;
            base = base * 16;
        }
        else if (hex[i]>='A' && hex[i]<='F')
        {
            dec = dec + (hex[i]-55)*base;
            base = base * 16;
        }
    }
    printf("Decimal Number: %d\n", dec);
}
int main()
{
    int choice;
    do
    {
        printf("1. Convert binary number to decimal number\n");
        printf("2. Convert octal number to decimal number\n");
        printf("3. Convert hexadecimal number to decimal number\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: Bin2Dec(); break;
            case 2: Oct2Dec(); break;
            case 3: Hex2Dec(); break;
            case 4: printf("Bye bye");break;
        }
    }while(choice>0 && choice<4);
    getch();
    return 0;
}
