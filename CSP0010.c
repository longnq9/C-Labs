#include <stdio.h>
#include <conio.h>

int main()
{
    //Declare variable
    int nArr[100];
    int i,j,k,n;


    //Input size of array

    printf("\nPlease enter size of array: ");
    scanf("%d",&n);

    //Input value of element in array
    for(i=0;i<n;i++)
    {
        printf("\nElement [%d] = ",i);
        scanf("%d",&nArr[i]);
    }

    //Find duplicate elements and delete it
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            //if duplicate found
            if (nArr[i] == nArr[j])
            {
                //Delete the current duplicate element
                for(k=j;k<n;k++)
                {
                    nArr[k] = nArr[k+1];
                }
                n--; //Decrement size after removing duplicate element
                j--; //if shifting of element then dont increase j
            }
        }
    }

    //Display result
    printf("\nThe array after removing duplicate elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",nArr[i]);
    }

    return 0;
}
