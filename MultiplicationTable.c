#include <stdio.h>

int Multiplying(int num)
{
  for (int i = 1; i <= 12; i++)
  {
    printf("\n%d x %d = %d", num, i, num * i);
  }
}
int main()
{
  int num;
  printf("Enter The Number Of You Want To Print The Table >> ");
  scanf("%d", &num);
  Multiplying(num);
}
