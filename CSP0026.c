#include<stdio.h>
#include<math.h>
#include<conio.h>

void Input()
{
    int dec;
    printf("\nConvert Decimal to Binary Program\n");
    printf("Enter a positive number: ");
    scanf("%d",&dec);
}

void Dec2Bin()
{
    int dec;
    int bin[20],i=0;
    while(dec!=0)
    {
        bin[i] = dec%2;
        dec = dec/2;
        i++;
    }

    printf("Binary Number: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}
int main()
{

    int choice;
    do
    {
    /*
    int dec;
    int bin[20],i=0;
    printf("\nConvert Decimal to Binary Program\n");
    printf("Enter a positive number: ");
    scanf("%d",&dec);

    while(dec!=0)
    {
        bin[i] = dec%2;
        dec = dec/2;
        i++;
    }

    printf("Binary Number: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    */
    Input();
    Dec2Bin();
    printf("\nDo you like to continue or Press ESC to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;
}
