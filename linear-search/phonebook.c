#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 手机通讯录中的名字
    string names[] = {"Yuliia", "David", "John"};
    // 手机通讯录中的电话号码
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-617-495-1000"};

    // 输入要查找的名字
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            // 找到名字，输出电话号码
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}