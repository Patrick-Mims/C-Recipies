#include <stdio.h>
#include <stdlib.h>

#include "recipies.h"

void compute()
{
  printf("Compute()\n");
  char ch;

  int flg;
  int cnt = 0;
  int num = 0;
  int sum = 0;

  do
  {
    do
    {
      flg = 0;

      printf("Enter a number (0 < N < 300): ");

      scanf("%d", &num);

      if((num <= 0) || (num > 300))
        flg = 1;

    } while(flg);

    for(cnt = 1; cnt <= num; cnt++)
      sum = sum + 1;

    printf("Required sum is: %d\n", sum);
    printf("Continue? (Y/N): ");

    scanf(" %c", &ch);

  } while((ch == 'Y') || (ch == 'y'));

  printf("Thank You for Playing!\n");
}

int main()
{
  compute();
  return 0;
}

/* Sum 1 to N Numbers */
