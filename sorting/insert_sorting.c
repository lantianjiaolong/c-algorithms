#include <stdio.h>

void insertionSortWithSteps(int arr[], int n) {
  int i, j, key;

  printf("开始插入排序...\n");
  printf("初始数组: ");
  for (int k = 0; k < n; k++)
    printf("%d ", arr[k]);
  printf("\n\n");

  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    printf("第 %d 步: 取出元素 %d (位置 %d)\n", i, key, i);
    printf("  已排序部分: ");
    for (int k = 0; k <= i - 1; k++)
      printf("%d ", arr[k]);
    printf("\n");

    while (j >= 0 && arr[j] > key) {
      printf("  将 %d 向后移动一位\n", arr[j]);
      arr[j + 1] = arr[j];
      j--;

      printf("  当前数组: ");
      for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);
      printf("\n");
    }

    arr[j + 1] = key;
    printf("  插入 %d 到位置 %d\n", key, j + 1);
    printf("  当前数组: ");
    for (int k = 0; k < n; k++)
      printf("%d ", arr[k]);
    printf("\n\n");
  }
}

int main() {
  int arr[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  insertionSortWithSteps(arr, n);

  printf("最终结果: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}