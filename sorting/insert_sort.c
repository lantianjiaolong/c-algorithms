#include <cs50.h>
#include <stdio.h>

void InsertSort(int array[], int length);
void printArray(int array[], int length);

int main(void) {
  int arr[9];

  for (int i = 0; i < 9; i++) {
    arr[i] = get_int("Enter a number: ");
  }

  printf("排序前：");
  printArray(arr, 9);

  InsertSort(arr, 9);

  printf("排序后：");
  printArray(arr, 9);

  return 0;
}

void InsertSort(int array[], int length) {
  // 对数组进行直接插入排序
  for (int i = 1; i <= length; i++) {
    // 假设当前元素是最小值
    int min = array[i];
    int j = i - 1;
    for (j = i - 1; j >= 0 && array[j] > min; j--) {
      // 如果前面的元素大于当前元素，则将前面的元素向后移动
      array[j + 1] = array[j];
      array[j] = min;
    }
  }
}

void printArray(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
