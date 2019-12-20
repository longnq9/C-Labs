#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,location=0;
    double nArray[100],nMin;

    printf("Please enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Element[%d] = ",i);
        scanf("%lf",&nArray[i]);
    }

    //Assign nMin to the first element in array.
    nMin = nArray[0];
    for(i=0;i<n;i++)
    {
        if(nMin>nArray[i])
        {
            nMin = nArray[i];
            location = i;
        }

    }

    printf("\nThe smallest element: %.2f - Its position: %d ",nMin,location);

    /*
    for(i=0;i<n;i++)
    {
        printf("Element [%d] is: %d\n",i,nArray[i]);
    }
    */
    return 0;
}
