#include <stdio.h>
#include <conio.h>

int main()
{
    //Declare variable
    char str[100];
    int Sodd = 0, Seven = 0, n;

    printf("Sum Even Odd Program\n");
    //Input size of number array
    printf("Please a number of element n= ");
    scanf("%d",&n);

    //Input element value in array
    printf("Input elements: \n");
    for(int i = 0; i < n; i++)
    {
        printf("\tElement [%d]: ",i);
        scanf("%d",&str[i]);
        //Sum of Odd, Even
        if (str[i]%2 == 0)
            Seven = Seven + str[i];
        else
            Sodd = Sodd + str[i];
    }
    //Print out result
    printf("Sum of Even = %d\n",Seven);
    printf("Sum of Odd = %d\n",Sodd);
    getchar();
    return 0;
}
