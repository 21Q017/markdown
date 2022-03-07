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

# 一些基本函数

###### printf()

将文字打印在屏幕上,同python里面的print();

###### scanf()

用户输入信息,将信息传输给程序,同python里面的input();

getchar()

等待用户的操作





