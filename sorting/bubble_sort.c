#include <stdio.h>

// 冒泡排序

/**
 * @brief 使用冒泡排序算法对整数数组进行升序排序
 *
 * 通过重复遍历数组，比较相邻元素并在顺序错误时交换它们，
 * 每轮遍历将当前未排序部分的最大值"冒泡"到末尾，直到整个数组有序。
 *
 * @param a 待排序的整数数组
 * @param n 数组中元素的个数
 * @return 无返回值
 */
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief 打印整型数组的所有元素
 * @param a 待打印的整型数组
 * @param n 数组中元素的个数
 * @return 无
 */
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("排序前：\n");
    printArray(a, 10);

    bubble_sort(a, 10);
    printf("排序后：\n");
    printArray(a, 10);
}
