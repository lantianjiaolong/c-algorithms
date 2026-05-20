
// 冒泡排序

// Repeat n times
//     For i from 0 to n-2
//         If numbers[i] and numbers[i+1] out of order
//             Swap them

// 逐个比较相邻的元素。
// 如果左边的人拿的数字和右边的人拿的数字顺序不对，那就交换他们的位置。
// 左边索引 i 停留在 n-2 的位置，也就是倒数第二个人或数组的倒数第二个元素处。
// 这样右边的索引 i+1 就会停留在 n-1 的位置，也就是最后一个元素处，也就不会超出数组的边界了。

// 每次循环，相邻的两个元素比较，如果顺序不对，则交换他们的位置。
// 数字较大的元素会逐渐 "冒泡" 一样一路 “浮” 到数组的末尾，直到整个数组有序。
// 伪代码如下：

// Repeat n-1 times
//     For i from 0 to n-2
//         If numbers[i] and numbers[i+1] out of order
//             Swap them
// 在代码中增加一个判断：只要某一轮遍历中没有发生任何交换，就退出循环，因为此时数组已经有序了，避免进入死循环。
//     If no swaps
//         Quit

// runner times: (n-1) * (n-1) = n^2 - 2n + 1 = O(n^2)
// 时间复杂度：欧姆(n)