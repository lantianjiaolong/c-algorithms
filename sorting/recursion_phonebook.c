// Recursive implementation of a phonebook sorting algorithm
// 递归实现一个电话簿排序算法

// 拿起电话薄
// Pick up phone book
// 打开电话薄中间页
// Open to middle of phone book
// 看看这一页
// Look at page
// 加入这个联系人在页面中
// If person is on page
//     拨打电话
//     Call person
// 假如这个联系人在电话薄的前半部分
// Else if person is earlier in book
// 打开电话薄左半部分的中间页
//     Open to middle of left half of book
// 回到代码的第3行
//     Go back to line 3
// 假如这个联系人在电话薄的后半部分
// Else if person is later in book
// 打开电话薄右半部分的中间页
//     Open to middle of right half of book
//     Go back to line 3
// Else
//     Quit
