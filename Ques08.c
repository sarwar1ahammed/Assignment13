#include <stdio.h>
// A recursive function to print first N terms of Fibonacci series
int Fibo(int);
int main()
{
    int a;
    printf("Enter how many terms you want to print : ");
    scanf("%d", &a);
    printf("First %d terms of Fibonacci series is : \n", a);
    for (int i=0; i<a; i++)
        printf("%d ", Fibo(i));

    printf("\n");
    return 0;
}
int Fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return Fibo(n-2) + Fibo(n-1);
}
