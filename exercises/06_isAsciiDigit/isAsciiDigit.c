#include <stdio.h>

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0'
 * to '9') Example: isAsciiDigit(0x35) = 1. isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
  //0x30 == 01010000 ~  01011001 = 0x39
  //emm......
  return (!((0x30 & x) ^ 0x30)) & !((x & 0xFFFFFF00) ^ 0) & !(!((0x8 & x) ^ 0x8) & (!((0x4 & x) ^ 0x4) | !((0x2 & x) ^ 0x2)));
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isAsciiDigit(x));
  return 0;
}
