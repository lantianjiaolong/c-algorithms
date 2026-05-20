# C语言中常见算法的运行时间复杂度

算法运行时间通常用**时间复杂度**（Time Complexity）来衡量，描述算法执行时间随输入规模 \(n\) 增长的变化趋势，使用大O符号表示。

以下是C语言中常见算法的时间复杂度分类与示例。

---

## 一、时间复杂度速查表

| 复杂度 | 名称 | 常见算法/场景 | \(n=1000\) 时的估算操作数 |
|--------|------|--------------|--------------------------|
| \(O(1)\) | 常数时间 | 数组随机访问、哈希表查找 | 1 |
| \(O(\log n)\) | 对数时间 | 二分查找、平衡树操作 | 约10 |
| \(O(n)\) | 线性时间 | 简单查找、数组遍历 | 1000 |
| \(O(n \log n)\) | 线性对数时间 | 归并排序、快速排序（平均） | 约10,000 |
| \(O(n^2)\) | 平方时间 | 冒泡排序、选择排序（最坏） | 1,000,000 |
| \(O(2^n)\) | 指数时间 | 斐波那契递归（朴素）、子集枚举 | 天文数字 |
| \(O(n!)\) | 阶乘时间 | 全排列、旅行商暴力解 | 不可计算 |

---

## 二、各类算法详细分析

### 1. \(O(1)\) — 常数时间

无论输入规模多大，执行时间恒定。

```c
int getElement(int arr[], int index) {
    return arr[index];  // 直接通过索引访问
}
```

### 2. \(O(\log n)\) — 对数时间

每步将问题规模减半，典型代表：**二分查找**。

```c
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

### 3. \(O(n)\) — 线性时间

遍历所有元素一次。

```c
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
```

### 4. \(O(n \log n)\) — 线性对数时间

优秀排序算法的平均时间复杂度。

```c
// 快速排序的划分函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}
// 快速排序递归调用深度约log n，每层操作O(n)
```

### 5. \(O(n^2)\) — 平方时间

嵌套循环导致，常见于简单排序算法。

```c
// 冒泡排序
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
```

### 6. \(O(2^n)\) — 指数时间

递归解决子问题时重复计算。

```c
// 朴素递归斐波那契 — 指数级
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
// 优化：使用备忘录可将复杂度降至O(n)
```

### 7. \(O(n!)\) — 阶乘时间

枚举所有排列组合。

```c
// 生成全排列
void permute(int arr[], int l, int r) {
    if (l == r) {
        // 输出排列
    } else {
        for (int i = l; i <= r; i++) {
            swap(&arr[l], &arr[i]);
            permute(arr, l+1, r);
            swap(&arr[l], &arr[i]);  // 回溯
        }
    }
}
// n个元素全排列共有n!种
```

---

## 三、排序算法时间复杂度对比

| 算法 | 最好情况 | 平均情况 | 最坏情况 | 空间复杂度 | 稳定性 |
|------|---------|---------|---------|-----------|--------|
| 冒泡排序 | \(O(n)\) | \(O(n^2)\) | \(O(n^2)\) | \(O(1)\) | 稳定 |
| 选择排序 | \(O(n^2)\) | \(O(n^2)\) | \(O(n^2)\) | \(O(1)\) | 不稳定 |
| 插入排序 | \(O(n)\) | \(O(n^2)\) | \(O(n^2)\) | \(O(1)\) | 稳定 |
| 归并排序 | \(O(n\log n)\) | \(O(n\log n)\) | \(O(n\log n)\) | \(O(n)\) | 稳定 |
| 快速排序 | \(O(n\log n)\) | \(O(n\log n)\) | \(O(n^2)\) | \(O(\log n)\) | 不稳定 |
| 堆排序 | \(O(n\log n)\) | \(O(n\log n)\) | \(O(n\log n)\) | \(O(1)\) | 不稳定 |
| 计数排序 | \(O(n+k)\) | \(O(n+k)\) | \(O(n+k)\) | \(O(k)\) | 稳定 |
| 基数排序 | \(O(d(n+k))\) | \(O(d(n+k))\) | \(O(d(n+k))\) | \(O(n+k)\) | 稳定 |

> \(k\) 表示数值范围，\(d\) 表示数字位数

---

## 四、常见数据结构操作复杂度

| 数据结构 | 访问 | 查找 | 插入 | 删除 |
|---------|------|------|------|------|
| 数组 | \(O(1)\) | \(O(n)\) | \(O(n)\) | \(O(n)\) |
| 有序数组 | \(O(1)\) | \(O(\log n)\) | \(O(n)\) | \(O(n)\) |
| 链表 | \(O(n)\) | \(O(n)\) | \(O(1)^*\) | \(O(1)^*\) |
| 哈希表 | \(O(1)\) | \(O(1)\) | \(O(1)\) | \(O(1)\) |
| 二叉搜索树（平衡） | \(O(\log n)\) | \(O(\log n)\) | \(O(\log n)\) | \(O(\log n)\) |
| 二叉堆 | \(O(1)\) | \(O(n)\) | \(O(\log n)\) | \(O(\log n)\) |

> *链表插入/删除需先 \(O(n)\) 找到位置；这里的 \(O(1)\) 指已知位置后的操作

---

## 五、如何测量实际运行时间

C语言中使用 `<time.h>` 测量代码执行时间：

```c
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    
    // 要测量的算法代码
    // 例如：排序100000个元素的数组
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("运行时间: %f 秒\n", cpu_time_used);
    return 0;
}
```

---

## 六、复杂度选择指南

| 输入规模 | 可接受的复杂度 | 示例算法 |
|---------|---------------|---------|
| \(n \leq 10\) | 几乎任意 | 全排列、DFS回溯 |
| \(n \leq 20\) | \(O(2^n)\) | 状态压缩DP |
| \(n \leq 100\) | \(O(n^3)\) | Floyd-Warshall |
| \(n \leq 1,000\) | \(O(n^2)\) | 动态规划、简单排序 |
| \(n \leq 100,000\) | \(O(n \log n)\) | 快排、归并、堆排 |
| \(n \leq 10^7\) | \(O(n)\) | 线性扫描、贪心 |
| \(n \leq 10^8\) | \(O(\log n)\) 或 \(O(1)\) | 二分查找、数学公式 |

> 实际运行时间还受常数因子、CPU架构、编译器优化（如 `-O2`）等影响。理论时间复杂度是大规模输入下最重要的参考指标。