# 数据类型、运算符和表达式

## 数据类型

- 基本数据类型 `int` `long` `float` `double` `char` |`long long` C99才支持
- 构造类型 **数组**、结构体、共用体、枚举
- 指针类型
- 空类型

数据类型所占字节数和机器硬件相关。FLOAT类型只是一个范围，没有办法表示真正的相等。

bool型，`<stdbool.h>`

### 存储

- 补码
- IEEE754

[ASCII](https://en.cppreference.com/w/c/language/ascii)

关于char类型，其实是有signed和unsigned区分的。[TYPE](https://en.cppreference.com/w/c/language/arithmetic_types)

隐式类型转换，总是从精度低范围小到精度高范围大转换。

### 一些0值

- 0 就是`int`0
- '0'字符，有对应的ASCII码
- "0"字符串，其实是字符加 '\0'
- '\0' ASCII中第一个，代表字符串结束
- NULL 0

## 常量

- 数组名是常量，不能被赋值。
- 使用define避免magic number

常量就是在程序执行过程中不会发生变化的量

- 整型常量 0 1
- 实型常量 3.14
- 字符常量 '1' 'a' '\n' '\021' '\x7f'
- 字符串常量 "" "a" "abc"
- 标识常量

## 变量

用来保存一些特定内容，并且在程序执行过程中随时发生变化的量。

定义：[存储类型] 数据类型 标识符 = 值

- auto，默认，自动分配空间，自动回收空间
- register，建议型，不能取地址
- static，自动初始化为0，被修饰的函数只能在本文件使用。
- extern，说明型，意味着不能改变你被说明变量的值

变量的生命周期和作用范围

- 全局和局部
- 全局变量的危害

## 运算符

- [op](https://en.cppreference.com/w/c/language/expressions#Operators)
- 关系运算符，非0为真
- 短路
- sizeof是运算符
- 位运算 某一位置0 1，测试某一位

