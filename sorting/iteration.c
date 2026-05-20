#include <cs50.h>
#include <stdio.h>

void draw(int n);

/**
 * @brief 程序入口函数，获取用户输入的高度并绘制相应图形
 * @return 程序退出状态码（始终返回0）
 */
int main(void)
{
  int height = get_int("Height: ");
  draw(height);
}

/**
 * @brief 绘制由 '#' 字符组成的左对齐金字塔图案
 *
 * 根据指定的高度，逐行打印 '#' 字符构成的左对齐金字塔。
 * 第 i 行包含 i+1 个 '#' 字符。
 *
 * @param n 金字塔的高度（行数），必须为非负整数
 */
void draw(int n)
{
  // 迭代打印金字塔的高度
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}