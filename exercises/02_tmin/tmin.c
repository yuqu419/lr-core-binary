#include <stdio.h>

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void){
  //有符号数
  return 1 << 31;
}

int main(void) {
  printf("%d\n", tmin());
  return 0;
}
