#include <stdio.h>
// A recursive function to calculate sum of digits of a given number
int digitSum(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Sum of the given number digits is : %d", digitSum(a));
    printf("\n");
    return 0;
}
int digitSum(int n)
{
    int sum=0;
    if (n == 0)
        return 0;
    return (n%10) + digitSum(n/10);
}
