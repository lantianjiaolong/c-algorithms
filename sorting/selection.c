#include <stdio.h>

// For i from 0 to n-1
//     Find smallest number between numbers[i] and numbers[n-1]
//     Swap smallest number with numbers[i]

// 比较次数：（n-1） + （n-2） + ... + 1 = n(n-1)/2 = (n^2 - n)/2 = n^2/2 - n/2

// 运行时间：O(n^2)

/**
 * @brief 交换两个整数的值
 *
 * @param xp 指向第一个整数的指针
 * @param yp 指向第二个整数的指针
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * @brief 使用选择排序算法对整数数组进行升序排序
 *
 * 遍历数组，每次从未排序部分中找到最小元素，将其与未排序部分的
 * 首元素交换，逐步扩大已排序部分直至完成排序。
 *
 * @param numbers 待排序的整数数组
 * @param n       数组中元素的个数
 */
void selection_sort(int numbers[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&numbers[min_idx], &numbers[i]);
    }
}

/**
 * @brief 打印整数数组的内容
 *
 * 将数组中的所有元素以空格分隔的形式输出到标准输出，并在末尾换行。
 *
 * @param numbers 待打印的整数数组
 * @param n       数组中元素的个数
 */
void print_array(int numbers[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

/**
 * @brief 程序入口函数，演示选择排序算法的使用。
 *
 * 初始化一个整数数组，调用 selection_sort 对其进行排序，
 * 然后调用 print_array 打印排序后的结果。
 *
 * @return 程序退出状态码，0 表示正常退出。
 */
int main()
{
    int numbers[] = {5, 4, 3, 2, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    selection_sort(numbers, n);
    print_array(numbers, n);
    return 0;
}
