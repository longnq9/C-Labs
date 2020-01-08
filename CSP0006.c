#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    //Declare variable
    int i,j,n;
    int num[MAX];
    int temp,choice;

    do
    {
    //Input number of element of array

    printf("\nPlease enter size of array: ");
    scanf("%d",&n);

    //Input value of element of array
    for(i=0;i<n;i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d",&num[i]);
    }

    //Comparison 2 numbers to swap between them

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[i]<num[j])
            {
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    //Output ASC sorted array
    printf("\nThe array sorted in ascending: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }

    //Output DSC sorted array by travel reverse array
    printf("\nThe array sorted in descending: \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",num[i]);
    }

    printf("\nDo you like to continue or Press ESC to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;
}
