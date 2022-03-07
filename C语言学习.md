# C语言折腾日记

## C语言的环境配置

C语言的环境设置主要由文本编译器和C编译器组成

### 文本编译器:

windows上可以使用notepad

linux上可以使用vim/vi

### C语言编译器:

常用的编译器为GCC
#### win上安装C语言环境
windows上要安装**MinGW**,因为上面会有GCC的安装。在选择安装时要选择gcc-core、gcc-g++、binutils 和 MinGW runtime，但是一般情况下都会安装更多其他的项。

win环境变量设置:
添加您安装的 MinGW 的 bin 子目录到您的 **PATH** 环境变量中，这样您就可以在命令行中通过简单的名称来指定这些工具。
#### linux上安装C语言环境
linux上安装先检查是否装有GCC

```shell
$ gcc -v
```

会给出以下反馈

```shell
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 11.2.0 (Ubuntu 11.2.0-7ubuntu2) 
```

搭建C语言环境

```shell
$ sudo apt upgrade
$ sudo apt-get install vim
$ sudo apt-get install gcc
$ sudo apt-get install build-essential		#编译程序必须软件包的列表信息
```

## 第一个C语言程序

```c
#include <stdio.h>      		//这是函数头//
int main()						//main是程序的入口//	
{
    float num;
    num = 1;
    printf("Do you like van you see?.\n");
    printf("I just like %f.\n",num);
    getchar();
    num = 2;
    printf("Do you like van you see?.\n");
    printf("I just like %f.\n",num);
    getchar();
    return 0;
    /*我是注释，我是注释adiwhiadkasn*/

}

```

在编辑好之后使用下面命令创造一个可运行的C程序

```
$ gcc -Wall text1.c -o text1
#-o text1 是创建一个名字为text1的C程序

$ ./text1					#运行该程序
```

一个C程序由函数头和函数组成

这是一个最简单的C程序

```c
#include <stdio.h>
int main()
/*123 */     // 123 // 
{
	return 0
}
```

备注一下这个最简单的小程序

1. 程序的第一行 *#include <stdio.h>* 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
2. 下一行 *int main()* 是主函数，程序从这里开始执行。
3. 下一行 /*...*/ 将会被编译器忽略，这里放置程序的注释内容。它们被称为程序的注释。
4. 下一行 **return 0;** 终止 main() 函数，并返回值 0。





## 

# C语言里面的数据类型

最基本的四种类型

| 序号 | 类型与描述                                                   |
| :--: | :----------------------------------------------------------- |
|  1   | **基本类型：** 它们是算术类型，包括两种类型：整数类型和浮点类型。 |
|  2   | **枚举类型：** 它们也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。 |
|  3   | **void 类型：** 类型说明符 *void* 表明没有可用的值。         |
|  4   | **派生类型：** 它们包括：指针类型、数组类型、结构类型、共用体类型和函数类型。 |

## 基本类型

基本类型包括整数和浮点数,具体的讨论如下:

| 类型           | 存储大小    | 值范围                                               |
| -------------- | ----------- | ---------------------------------------------------- |
| char           | 1 字节      | -128 到 127 或 0 到 255                              |
| unsigned char  | 1 字节      | 0 到 255                                             |
| signed char    | 1 字节      | -128 到 127                                          |
| int            | 2 或 4 字节 | -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647 |
| unsigned int   | 2 或 4 字节 | 0 到 65,535 或 0 到 4,294,967,295                    |
| short          | 2 字节      | -32,768 到 32,767                                    |
| unsigned short | 2 字节      | 0 到 65,535                                          |
| long           | 4 字节      | -2,147,483,648 到 2,147,483,647                      |
| unsigned long  | 4 字节      | 0 到 4,294,967,295                                   |



## 声明

声明就是去定义一个变量，这在python中是一样的。

```python
		a = 123
		type a
out[1]: int
```

这是在python中去定义一个变量，在python中可以直接给予变量名，赋值和数据类型。

但是这在c/c++中是不可以的

```c
int num
num = 123
```

在c里命名变量要先定义变量的数据类型，再去给变量定义内容。但是变量是可以重新赋值的，同python一样(python同C一样)。

当要进行多个变量声明的时候用','隔开。

```
int number1, number2;
```























# 一些基本函数

###### `printf()`

将文字打印在屏幕上,同python里面的print();

###### `scanf()`

用户输入信息,将信息传输给程序,同python里面的input();

###### `getchar()`

等待用户的操作

###### ` main()`

主函数,程序的入口







# C语言里面的杂项

## 注释

```c
/* */
```

对的，这是一个注释，里面什么都可以输入，这种注释的好处是可以用到多行。

```c
// //
```

这也是一种注释，但是这种注释只能用于单行。

## debug

debug(调试)是找出并修正错误的过程。

## debugger

debugger(调试器)是用来调试debug的程序。



