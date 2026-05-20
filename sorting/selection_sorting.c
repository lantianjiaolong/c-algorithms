#include <stdio.h>

void selectionSortWithSteps(int arr[], int n)
{
    int i, j, minIndex, temp;

    printf("开始选择排序...\n\n");

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        printf("第 %d 轮: 从位置 %d 到 %d 中寻找最小值\n", i + 1, i, n - 1);

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            printf("  找到最小值 %d (位置 %d), 与 %d (位置 %d) 交换\n", arr[minIndex],
                   minIndex, arr[i], i);
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        else
        {
            printf("  当前位置 %d 已经是最小值\n", arr[i]);
        }

        printf("  当前数组: ");
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n\n");
    }
}

int main()
{
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    selectionSortWithSteps(arr, n);

    printf("最终结果: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}