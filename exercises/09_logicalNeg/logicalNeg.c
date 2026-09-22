#include <stdio.h>

/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
 */
int logicalNeg(int x) {
  return (((~x + 1) >> 31) | (x >> 31)) + 1; 
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", logicalNeg(x));
  return 0;
}
/**
 * ## 个人Fork的Clings链接：
https://github.com/yuqu419/lr-core-binary
## 学习笔记
- 二进制和十六进制间可以每二进制四位转为十六进制一位，类似地，二进制转八进制应该每三位转化。
- 表示负数有原码，反码，补码三种方式，一般使用补码，以5为例：

| 表示方式 | 原码（Sign-Magnitude） | 反码（Ones’ Complement） | 补码（Two’s Complement） |
| ---- | ------------------ | -------------------- | -------------------- |
| 5    | 00000101           | 00000101             | 00000101             |
| -5   | 10000101           | 11111010             | 11111011             |


> 补码的优势在于能确保0的二进制表示唯一
- 有符号整数所占字节为N,则其取值范围为 **-2^{4N - 1} ~ 2^{4N -1} - 1**,在64位系统上，char占1字节，short占2字节，int占4字节，long占8字节
- 当有符号数与无符号数发生比较，运算，传参等操作时，有符号数会被隐式地转化位无符号数
```C
#include <stdio.h>
int main(){
  unsigned int a = 1;
  int b = -1;
  printf("%d",a > b);
  return 0;
}
```
 * 
 * 
 */