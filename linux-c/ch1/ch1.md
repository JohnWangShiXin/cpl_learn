# `CPL`基础

### C语言发展史

- 1960 原型A语言 --> ALGOL语言
- 1963 CPL语言
- 1970 BCPL
- 1973 C语言

## C语言特点

- 基础性语言
- 语法简介、紧凑、方便、灵活
- 运算符、数据结构丰富
- 结构化、模块化编程
- 移植性好，执行效率高
- 允许直接对硬件操作(指针)

## C语言内容

- 基本概念
- 数据类型，运算符和表达式
- 输入输出
- 流程控制
- 数组
- 指针
- 函数
- 构造类型
- 动态内存管理
- 调试工具和调试技巧(make,gdb)
- 库函数

## 从C源代码到可执行文件的全过程

- `gcc -E hello.c >> hello.i`预处理
- `gcc -S hello.i` 编译生成hello.s
- `gcc -c hello.s` 汇编生成hello.o
- `gcc hello.o -o hello`链接生成可执行文件

其实上面的过程可以通过一步完成：

```bash
# 使用gcc
gcc hello.c -o hello
#使用make 
make hello
```

### -Wall参数

> 许多段错误其实就包含在warning之中。

```c
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
// #include<string.h>
int main()
{
	FILE* fp;
	fp = fopen("tmp","r");
	
	if(fp == NULL)
	{
		fprintf(stderr, "fopen():%s\n", strerror(errno)); //这里会导致段错误
		exit(1);
	}
	
	puts("ok!");

	exit(0);
}
```

当一个函数没有显式声明的时候，默认换回`int`。

如果使用`-Wall`参数可以避免上述程序的段错误。

## 杂项

### `echo $?`

这个指令可以返回命令或者函数返回的状态。

当`main`函数没有`return`的时候，会默认返回0。

### 注释

```c
#if 0
func()
{
    //some code
}
#endif
```

## END

- 写程序的要求
  - 头文件的重要性
  - 函数为单位编写程序
  - 声明 + 实现
  - return 0
  - 多用空格和空行
  - 添加注释
- 算法：解决问题的方法（流程图、NS图、FSM）
- 程序：某种语言实现的算法
- 进程
- 防止写越界、防止内存泄漏、谁打开谁关闭、谁申请谁释放