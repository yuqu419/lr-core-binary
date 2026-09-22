#include <stdio.h>

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y)
{
  return (((x >> 31) ^ (y >> 31) + 0xFFFFFFFF) & !((y + (~x) + 1) >> 31 & 0xFFFFFFFF)) | (~((x >> 31) ^ (y >> 31) + 0xFFFFFFFF) & !((y >> 31) & 1) & ((x >> 31) & 1));
}

int main(void)
{
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
