#include <stdio.h>
// A program in C to calculate the power of any number using recursion.
int power(int, int);
int main()
{
    int a, b;
    printf("Enter the Base number : ");
    scanf("%d", &a);
    printf("Enter the power number : ");
    scanf("%d", &b);

    printf("%d", power(a, b));
    printf("\n");
    return 0;
}
int power(int n, int m)
{
    if (m == 0)
        return 1;
    return n*power(n, m-1);
}
