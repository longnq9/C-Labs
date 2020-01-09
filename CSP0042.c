#include <stdio.h>
#include <conio.h>
#define MAX 100

int main()
{
    //Declare variable
    int nArr[MAX];
    int i = 0;
    int n;

    //Input element value unless value = 0
    printf("\nEnter the elements of the array:\n");
    do
    {
        scanf("%d",&nArr[i]);
        i++;
    }while(nArr[i-1]!=0 && i < MAX);

    //Assign size of array
    n = i - 1;
    int max = nArr[0];
    //Display all element in array
    printf("\nArray elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",nArr[i]);
        if (max < nArr[i])
            max = nArr[i];
    }

    //Display max element in array
    printf("\n\nArray maximum value: \nThe max is %d",max);

    //Display even element in array
    printf("\n\nArray even value: ");
    for(i=0;i<n;i++)
    {
        if (nArr[i]%2 == 0)
            printf("%d ",nArr[i]);
    }
    getch();
    return 0;
}
