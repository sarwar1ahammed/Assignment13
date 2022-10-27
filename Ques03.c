#include <stdio.h>
// A recursive function to calculate sum of first N even natural numbers
int evenSum(int);
int main()
{
    int a;
    printf("Enter how many terms you want to add : ");
    scanf("%d", &a);

    printf("Sum of first %d even natural numbers is : %d", a, evenSum(a));
    printf("\n");
    return 0;
}
int evenSum(int n)
{
    if (n == 1)
        return 2;
    
    return 2*n + evenSum(n-1);
}
