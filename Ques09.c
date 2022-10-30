#include <stdio.h>
// A program in C to count the digits of a given number using recursion.
int digit(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
   
    printf("%d number of digit present in the given number.", digit(a));

    printf("\n");
    return 0;
}
int digit(int n)
{
    static int count=0;
    if (n > 0)
    {
        count++;
        digit(n / 10);        
    }  
    return count;          
    
}
