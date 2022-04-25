# Python基础知识学习

## 基本语法

python的语法特色就是不再使用{}来表示一个代码块，而是通过使用缩进空格数来表示一个代码块

### 数据类型

Python3 中有六个标准的数据类型：

- Number（数字）
- String（字符串）
- List（列表）
- Tuple（元组）
- Set（集合）
- Dictionary（字典）

Python3 的六个标准数据类型中：

- **不可变数据（3 个）：**Number（数字）、String（字符串）、Tuple（元组）；
- **可变数据（3 个）：**List（列表）、Dictionary（字典）、Set（集合）。

#### 数据类型赋值规则

```c
#通常用“=”来连接变量名和变量
#常常左边是变量名，右边是变量值
counter = 100          # 整型变量
miles   = 1000.0       # 浮点型变量
name    = "runoob"     # 字符串
    
#多个变量赋值
a = b = c = 1
a, b, c = 1, 2, "runoob"
```

#### 数据类型的删除

`` del``语句可以用来删除已经创建的变量

```python
#可以删除一些对象引用
del var1[,var2[,var3[....,varN]]]
#可以删除单个或多个对象
del var
del var_a, var_b
```

#### 数据类型的判断

内置的 ``type()`` 函数可以用来查询变量所指的对象类型。

此外还可以用 ``isinstance`` 来判断

```python
a, b, c, d = 20, 5.5, True, 4+3j
print(type(a), type(b), type(c), type(d))

a = 111
isinstance(a, int)
#输出结果会反馈True||False
```

isinstance 和 type 的区别在于：

- type()不会认为子类是一种父类类型。
- isinstance()会认为子类是一种父类类型。

```python
class A:
	pass
class B(A):
	pass
isinstance(A(), A)
##True
type(A()) == A
##True
isinstance(B(), A)
##True
type(B()) == A
##False
```



#### Number数据类型

Python3 支持 **int、float、bool、complex（复数）**。

在Python 3里，只有一种整数类型 int，表示为长整型，没有 python2 中的 Long。

像大多数语言一样，数值类型的赋值和计算都是很直观的。

| int    | float      | complex    |
| ------ | ---------- | ---------- |
| 10     | 0.0        | 3.14j      |
| 100    | 15.20      | 45.j       |
| -786   | -21.9      | 9.322e-36j |
| 080    | 32.3e+18   | .876j      |
| -0490  | -90.       | -.6545+0J  |
| -0x260 | -32.54e100 | 3e+26J     |
| 0x69   | 70.2E-12   | 4.53e-7j   |

Python还支持复数，复数由实数部分和虚数部分构成，可以用a + bj,或者complex(a,b)表示， 复数的实部a和虚部b都是浮点型



**数值运算**

```python
>>> 5 + 4  # 加法
9
>>> 4.3 - 2 # 减法
2.3
>>> 3 * 7  # 乘法
21
>>> 2 / 4  # 除法，得到一个浮点数
0.5
>>> 2 // 4 # 除法，得到一个整数
0
>>> 17 % 3 # 取余
2
>>> 2 ** 5 # 乘方
32
```







## python杂项

### 注释

使用``#``来表示注释或者`` '''``来表示注释

### 长语句的写法

一般不要写太长的语句，虽然python可以通过`` 续行符：\``来表示下一行代码或者`` ()``来表示一条语句

Python 通常是一行写完一条语句，但如果语句很长，我们可以使用反斜杠 \ 来实现多行语句，例如：

```
total = item_one + \
        item_two + \
        item_three
```

在  [], {}, 或 () 中的多行语句，不需要使用反斜杠 \，例如：

```
total = ['item_one', 'item_two', 'item_three',
        'item_four', 'item_five']
```

### 编码

默认情况下，Python 3 源码文件以 **UTF-8** 编码，所有字符串都是 unicode 字符串。 当然你也可以为源码文件指定不同的编码：

```
# -*- coding: cp-1252 -*-
```

上述定义允许在源文件中使用 Windows-1252 字符集中的字符编码，对应适合语言为保加利亚语、白罗斯语、马其顿语、俄语、塞尔维亚语。

### 标识符

- 第一个字符必须是字母表中字母或下划线 _ 。
- 标识符的其他的部分由字母、数字和下划线组成。
- 标识符对大小写敏感。

在 Python 3 中，可以用中文作为变量名，非 ASCII 标识符也是允许的了。



### python保留字

保留字即关键字，我们不能把它们用作任何标识符名称。Python 的标准库提供了一个 keyword 模块，可以输出当前版本的所有关键字：

```
>>> import keyword
>>> keyword.kwlist
['False', 'None', 'True', 'and', 'as', 'assert', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
```



### 空行

函数之间或类的方法之间用空行分隔，表示一段新的代码的开始。类和函数入口之间也用一行空行分隔，以突出函数入口的开始。

空行与代码缩进不同，空行并不是 Python 语法的一部分。书写时不插入空行，Python 解释器运行也不会出错。但是空行的作用在于分隔两段不同功能或含义的代码，便于日后代码的维护或重构。

**记住：**空行也是程序代码的一部分。

### 同一行显示多条语句

Python 可以在同一行中使用多条语句，语句之间使用分号 ; 分割，以下是一个简单的实例：

```python
import sys; x = 'runoob'; sys.stdout.write(x + '\n')
```



### 等待用户输入

执行下面的程序在按回车键后就会等待用户输入：

```python
input("\n\n按下 enter 键后退出。")
```

以上代码中 ，\n\n 在结果输出前会输出两个新的空行。一旦用户按下 **enter** 键时，程序将退出。

### import 与 from...import

在 python 用 import 或者 from...import 来导入相应的模块。

将整个模块(somemodule)导入，格式为： import somemodule

从某个模块中导入某个函数,格式为： from somemodule import somefunction

从某个模块中导入多个函数,格式为： from somemodule import firstfunc, secondfunc, thirdfunc

将某个模块中的全部函数导入，格式为： from somemodule import *



# Python数据分析与可视化

学习python 数据分析与可视化（第二版）魏伟一 李晓红 高志玲 清华大学出版社

## 数据分析与常用的可视化工具

例如：excel,R语言,Python,SAS Enterprise Miner,SPSS,专用的可视化分析工具

## 为什么选用python呢？

1.首先爬去数据可以用python

```
常用的爬虫库：requests、selenium、Scrapy
```

2.数据分析可以用python

```
常用的分析库：numpy、pandas、matplotlib
```

### 介绍一下会用到的库

#### 1.numpy

常用的库如：Scipy,pandas,tensorflow都是以numpy作为架构的基础部分

#### 2.scipy

science python提供了许多数学算法和函数，可以进行数据的科学计算

#### 3.pandas

老朋友熊猫库，里面常用的一些数据结构：series、dataframe、panel等

其中series是一维数组与array和list都是十分类似的。区别是：list的元素可以是不同数据类型，而series和array是可以储存相同的数据类型的。

dataframe是二维数组，可以说是series的容器

panel是三维数组，可以说是dataframe的容器

#### 4.matplotilb

是python代替matlab的一个库，可以和许多图形工具一起使用，例如PyQt和wxpython

#### 5.seaborn

是结合matplotlib的一个可视化工具，使得一些做图变得更简单一些

#### 6.Scikit-learn

一个机器学习的库，具有以下基本功能：分类、回归、聚类、数据降维、模型选择和数据预处理这几部分。