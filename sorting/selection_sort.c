#include <cs50.h>
#include <stdio.h>

void SelectionSort(int array[], int length);
void printArray(int array[], int length);

// 选择排序
int main(void) {
  int arr[] = {64, 25, 12, 22, 11};
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("原始数组: ");
  printArray(arr, len);

  SelectionSort(arr, len);

  printf("排序后数组: ");
  printArray(arr, len);

  return 0;
}

void SelectionSort(int array[], int length) {
  // 定义循环变量
  int i, j;
  // 定义最小值的索引和临时变量
  int min_index;
  int temp;

  for (i = 0; i < length - 1; i++) {
    // 假设当前索引是最小值
    min_index = i;

    for (j = i + 1; j < length; j++) {
      if (array[j] < array[min_index]) {
        min_index = j;
      }
    }

    // 交换最小值和当前索引的值
    if (min_index != i) {
      temp = array[i];
      array[i] = array[min_index];
      array[min_index] = temp;
    }
  }
}

void printArray(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}