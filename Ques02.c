#include <stdio.h>
// A recursive function to calculate sum of first N odd natural numbers
int oddSum(int);
int main()
{
    int a;
    printf("Enter how many term you want to add : ");
    scanf("%d", &a);

    printf("Sum of first %d odd natural numbers is : %d", a, oddSum(a));

    printf("\n");
    return 0;
}
int oddSum(int n)
{
    if (n == 1)
        return 1;

    return (2*n-1) + oddSum(n-1);
}
