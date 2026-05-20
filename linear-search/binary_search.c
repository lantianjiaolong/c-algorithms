
// 二分搜索只能用于已排序的数组

// For i from 0 to n-1
//     If 50 is behind doors[i]
//         Return true
// Return false

// 如果 50 既不在中间，也不在左边或右边，那就是 50 没有在箱子里，则返回 false

// If no doors left
//     Return false
// If 50 is behind middle door
//     Return true
// Else if 50 < middle door
//     Search left half
// Else if 50 > middle door
//     Search right half
// 可能导致程序崩溃
// Else
//     Return false

// If no doors left
//     Return false
// If 50 is behind doors[middle]
//     Return true
// Else if 50 < doors[middle]
//     Search doors[0] through doors[middle - 1]
// Else if 50 > doors[middle]
//     Search doors[middle + 1] through doors[n - 1]

// If no doors left
//     Return false
// If number behind middle door
//     Return true
// Else if number < middle door
//     Search left half
// Else if number > middle door
//     Search right half
