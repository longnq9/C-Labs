#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char *numberArray[] = {" Zero", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen"," Sixteen", " Seventeen", " Eighteen", "Nineteen"};
char *tensArray[] = {"",""," Twenty"," Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety"};
char *midNames[] = {""," Thousand"," Million"," Billion"};

char* NumToWords(int temp)
{
        /*Initialize a string */
        char *textToTransfer;
        int hund_,ten_,unit_,saved_tens;

        textToTransfer = (char*)calloc(1,100);
        hund_ = temp / 100;
        ten_ = temp % 100;
        saved_tens = ten_;
        if (hund_)
        {
                printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                strcat(textToTransfer,numberArray[hund_]);
                strcat(textToTransfer," hundred");
                printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                if (ten_)
                {
                        printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                        strcat(textToTransfer," and");
                }
        }
        ten_ = ten_ / 10;
        unit_ = saved_tens % 10;
        if (ten_ > 1)
        {
                               printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                strcat(textToTransfer,tensArray[ten_]);
                if (unit_)
                {
                        printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                        strcat(textToTransfer,numberArray[unit_]);
                }
        }
        else if(saved_tens != 0)
        {
                printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
                strcat(textToTransfer,numberArray[saved_tens]);
        }
        printf("%d->%s()::%s\n",__LINE__,__func__,textToTransfer);
        return (textToTransfer);
}
int main()
{
    int i, j, number, dummy,choice;
    char *strings[10];
    do{
    char fullstring[150] = {'\0'};
    printf("\nEnter the number you want to convert -> ");
    scanf("%d",&number);

    dummy = number;

    //Group 3 digits number
    for(i=0;(i<=2)&&(dummy!=0);i++)
    {
        strings[i] = NumToWords(dummy%1000);
        dummy = dummy/1000;
        printf("\ni = %d Group digit = %d\n",i,dummy);
    }
    j = i;
    for(i=0;i<j;i++)
    {
        printf("%s\t",strings[i]);
    }
    for(i=j-1;i>=0;i--)
    {
        strcat(fullstring,strings[i]);
        strcat(fullstring,midNames[i]);
    }

    printf("\n%s",fullstring);
    printf("\nDo you want to continue or Press ESC to exit\n");
    choice = getch();
    }while(choice!=27);
    return 0;
}
