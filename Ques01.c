#include <stdio.h>
// A recursive function to calculate sum of first N natural numbers.
int sum(int);
int main()
{
    int a;
    printf("Enter how many natural numbers you want to print: ");
    scanf("%d", &a);
    printf("Sum of %d natural numbers is : %d", a, sum(a));

    printf("\n");
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n-1);
}
