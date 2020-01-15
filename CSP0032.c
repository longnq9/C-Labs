#include <stdio.h>

int main()
{
    //Declare variable
    int i, n, SoD = 0, D[10] = {};

    //Ingut an natural number
    printf("Sum Digit Program\n");
    printf("Enter an integer n=");
    scanf("%d",&n);
    //
    while(n!=0)
    {
        D[i] = n%10;
        n = n/10;
        i++;
    }
    for(int j = i; j >=0;j--)
    {
        SoD = SoD + D[j];
    }
    //Print out sum of digits
    printf("Sum of digit: %d",SoD);
    getchar();
    return 0;
}
