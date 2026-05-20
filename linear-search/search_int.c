#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");

    // TODO: Search for n in numbers array
    // 线性搜索：Linear Search
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            // 如果找到了，就结束整个程序
            printf("Found\n");
            return 0;
        }
    }
    // 如果没有找到，就结束整个程序
    printf("Not Found\n");
    return 1;
}