#include <stdio.h>
#include <conio.h>
#include <math.h>

int isSquare(double n)
{
    return sqrt(n) == (int)sqrt(n)?1:0;
}


int main()
{
    //Declare variable
    double n;
    int key;


    do{
    //Function 1
    printf("Check Square Number Program\n");
    printf("Enter a positive integer n = ");
    scanf("%lf",&n);
    int s = (int)sqrt(n);

    if(n<0)
    {
        printf("Please enter a positive integer\n");
    }
    else if (isSquare(n) == 1)
        printf("%.0lf is a square number %.0lf = %d x %d\n",n,n,s,s);
    else
        printf("%.0lf is not a square number\n",n);

    printf("Continue or Press ESC to Exit\n");
    key = getch();
    }while(key != 27);
    return 0;
}
