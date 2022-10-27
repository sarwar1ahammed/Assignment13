#include <stdio.h>
// A recursive function to calculate sum of squares of first n natural numbers
int sqSum(int);
int main()
{
    int a;
    printf("Enter how many terms you want to add : ");
    scanf("%d", &a);

    printf("Sum of Squares of first %d natural numbers is : %d", a, sqSum(a));

    printf("\n");
    return 0;
}
int sqSum(int n)
{
    if (n == 1)
        return 1;
    return n*n + sqSum(n-1);
}
