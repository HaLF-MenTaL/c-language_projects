#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int num;
    printf("Enter The Number You Want The Factorial Of : ");
    scanf("%d", &num);
    printf("The Factorial Of %d is %d", num, factorial(num));
    return 0;
}