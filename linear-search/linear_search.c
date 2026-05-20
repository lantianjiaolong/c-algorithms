#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 定义一个长度为7的数组
    int numbers[7];

    // 查找一个空数组中的数字
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        // 如果找到了，就结束整个程序
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    // 如果没有找到，就结束整个程序
    printf("Not Found\n");
    return 1;
}