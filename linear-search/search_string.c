#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  string strings[] = {"battleship", "boot",    "cannon",
                      "iron",       "thimble", "top hat"};

  // 这个程序永远会返回 "Not found!"
  // 因为字符串比较不是用 == 运算符，而是用 strcmp 函数
  // == 运算符用于比较整数、长整型、字符以及其他一些数据类型
  string s = get_string("String: ");
  for (int i = 0; i < 6; i++) {
    // if (strings[i] == s) {
    //   printf("Found!\n");
    //   return 0;
    // }
    // 比较函数中两个参数字符串的返回值是否为 0
    // 第一个参数，字符串数组中的每一个元素，类型为 string
    // 第二个参数，要查找的字符串，类型为 string
    if (strcmp(strings[i], s) == 0) {
      printf("Found!\n");
      return 0;
    }
  }
  printf("Not found!\n");
  return 1;
}