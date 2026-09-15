#include <stdio.h>

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {

if(!((x >> 31) ^ 0xFFFFFFFF) & !(y >> 31)) return 1;
if(!(x >> 31) && !((y >> 31) ^ 0xFFFFFFFF)) return 0;
return !(((y + (~x) + 1) & (1 << 31)));
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
