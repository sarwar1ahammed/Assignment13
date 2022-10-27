#include <stdio.h>
// A recursive function to calculate factorial of a given number
int fact(int);
int main()
{
    int a;
    printf("Enter a number to find the Factorial : ");
    scanf("%d", &a);
    printf("Factorail of %d is : %d", a, fact(a));
    printf("\n");
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n-1);
}
