#include <stdio.h>
#include <conio.h>
#define MAX 100

// Inserts a key in arr[] of given capacity.  n is current size of arr[].
//This function returns n+1 if insertion is successful, else n.
int insertSorted(int nArr[], int n, int k, int capacity)
{
    // Cannot insert more elements if n is already
    // more than or equal to capcity
    if (n>=capacity)
        return n;
    int i;
    for(i=n-1;(i>=0 && nArr[i]>k);i--)
        nArr[i+1] = nArr[i];
    nArr[i+1] = k;

    return (n+1);
}

int main()
{
    //Declare variable
    int i,j,k,n;
    int nArr[MAX];
    int temp;
    int capacity = sizeof(nArr) / sizeof(nArr[MAX]);

    //Input number of elements in array
    printf("\nPlease enter size of array: ");
    scanf("%d",&n);

    //Input value of elements in array
    for(i=0;i<n;i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&nArr[i]);
    }

    //Sort array in ascending and display the sorted array
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (nArr[i]<nArr[j])
            {
                temp = nArr[i];
                nArr[i] = nArr[j];
                nArr[j] = temp;
            }
        }
    }
    printf("\nThe array after sorting: \n");
    for(i=0;i<n;i++)
    {

        printf("%d\t",nArr[i]);
    }

    //Input a new value
    printf("\nPlease enter new value: ");
    scanf("%d",&k);

    //Call function to add new value into sorted array and display
    n = insertSorted(nArr,n,k,capacity);

    //Display the new array
    printf("\nNew Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",nArr[i]);
    }
    return 0;
}
