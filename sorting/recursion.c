#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
  int height = get_int("Height: ");
  draw(height);
}

/**
 * 递归函数：如果一个函数调用了自身，那么它就是一个递归函数。
 * 递归函数必须有一个基准情况（base case），以防止无限递归。
 * 递归算法或递归函数就是那种调用自身、使用自身的算法或函数。
 * Draw a pyramid of a given height
 * @param n The height of the pyramid
 */

void draw(int n)
{
  if (n <= 0)
  {
    return;
  }

  // 递归调用，先打印上层的行；
  // 然后打印当前行；
  draw(n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");
}