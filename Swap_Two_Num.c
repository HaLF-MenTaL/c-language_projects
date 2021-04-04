#include <stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int main()
{
    int a = 56, b = 38;
    printf("A is %d and B is %d\n", a, b);
    swap(&a, &b);
    printf("A is %d and B is %d", a, b);
    return 0;
}
