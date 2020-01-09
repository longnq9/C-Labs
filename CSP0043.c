#include <stdio.h>
#include <conio.h>
#define MAX 100

int Add(int value, int *a, int *pn)
{
    a[(*pn)++] = value;
}
int Search(int x, int *a, int n)
{
    for(int i = 0; i < n;i++)
        if (a[i] == x)
            return i;
    return -1;
}

void RemoveF(int x, int *a, int *pn)
{
    int index = search(x,a,*pn);
    if (index == -1)
        printf("%d doesn't exist in array.\n");
    for(int i = index; i < (*pn); i++)
        a[i] = a[i+1];
    (*pn)--;
}
void RemoveA(int x, int *a, int *pn)
{
    for(int i = 0; i < (*pn); i++)
    {
        if (a[i] == x)
        {
            for(int j = i; j < (*pn); j++)
                a[j] = a[j+1];
            (*pn)--;
            i--;
        }
    }
}
void PrintOut(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
}

int main()
{
    //Declare variable
    int option;
    int a[MAX],n=0,value;

    //Menu Program
    printf("\nArray Manupulation");
    printf("\nPlease choose option below: ");
    printf("\n1. Add a value");
    printf("\n2. Search a value");
    printf("\n3. Remove the first existence of a value");
    printf("\n4. Remove all existences of a value");
    printf("\n5. Print out the array");
    printf("\n6. Sort the array in ascending order");
    printf("\n7. Sort the array in descending order");
    printf("\n8. Others - Quit");
    printf("\nEnter your choice: ");
    scanf("%d",&option);
    switch(option){
    case 1:
        {
        printf("Input an add value: ");
        scanf("%d",&value);
        Add(value,a, &n);
        printf("Added\n");
        }
        break;
    case 2:
        {
            printf("Input the search value: ");
            scanf("%d",&value);
            int pos = Search(value,a,n);
            if (pos < 0) printf("Not found!\n");
            else printf("Position is found: %d",pos);
        }
            break;
    case 3: RemoveF(value,a,&n); break;
    case 4: RemoveA(value,a,&n); break;
    case 5: PrintOut(a,n); break;
    //case 6: SortASC(a,n); break;
    //case 7: SortDSC(a,n); break;
    default: {
        printf("\nGoodbye.");
    }
    }
    getch();
    return 0;
}
