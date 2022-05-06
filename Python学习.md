# Python基础知识学习

## 一.基本语法

python的语法特色就是不再使用{}来表示一个代码块，而是通过使用缩进空格数来表示一个代码块

### 1.语法规则

#### 空行

函数之间或类的方法之间用空行分隔，表示一段新的代码的开始。类和函数入口之间也用一行空行分隔，以突出函数入口的开始。

空行与代码缩进不同，空行并不是 Python 语法的一部分。书写时不插入空行，Python 解释器运行也不会出错。但是空行的作用在于分隔两段不同功能或含义的代码，便于日后代码的维护或重构。

**记住：**空行也是程序代码的一部分。



#### 长语句的写法

一般不要写太长的语句，虽然python可以通过`` 续行符：\``来表示下一行代码或者`` ()``来表示一条语句

根据pep8规则，一般一行不超过79个字符

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



#### 同一行显示多条语句

Python 可以在同一行中使用多条语句，语句之间使用分号 ; 分割，以下是一个简单的实例：

```python
import sys; x = 'runoob'; sys.stdout.write(x + '\n')
```



#### 缩进

一般采用空格缩进4个字符，最好不要用tab,不同的编译器可能会出现问题



#### 注释

使用``#``来表示注释或者`` '''``来表示注释

并且在低于python3.7版本，为了避免出现

### 2.数据类型

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

#### 2.0.1数据类型赋值规则

在python当中变量名本质上是一个内存地址，通过`` id()``运算可以查看变量的地址

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

#### 2.0.2数据类型的删除

`` del``语句可以用来删除已经创建的变量

```python
#可以删除一些对象引用
del var1[,var2[,var3[....,varN]]]
#可以删除单个或多个对象
del var
del var_a, var_b
```

#### 2.0.3数据类型的判断

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



#### 2.1数字数据类型

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



##### 数值运算

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

在python当中多个运算式不能用[],但是可以用多个()来表示常规的数学表达式

注：在进行浮点数计算的时候会出现精度损失或者结果有异常的情况，这是因为计算机是通过二进制相加减的，之后再转换成浮点数

##### 其他运算

1.关系运算

```
== （等于） ； ！= （不等于） ； > （大于） ； < （小于） ； >= （大于等于） ； <= （小于等于）
```

2.逻辑运算

```
and （与）
or （或）
not（非）
^ （异或）
```

3.位运算

这是对二进制数逐位运算

| &    | 与运算符   | 逻辑乘，就是将两个二进制相乘，每一位相乘，0\*0 and 1\*1 |
| ---- | ---------- | ------------------------------------------------------- |
| \|   | 或运算符   | 逻辑加，就是将两个二进制取相同的1,其他为0               |
| ^    | 异或运算符 | 二进制相异为1,相同为0                                   |
| ~    | 取反运算符 | 就是取反                                                |
| <<   | 左移运算符 | 二进制左移n位，相当于乘2的n次方                         |
| >>   | 右移运算符 | 二进制右移n位，相当于除2的n次方                         |

4.成员运算 

用于检查某个元素是否在序列当中（列表，字符串，元组等）

```python
x in y
x not in y
```



#### 2.2字符串数据类型

一般不会太过于强调字符串的长度限制（毕竟有360MB这么大）

正常的字符串要用``''``来定义一个字符串

##### 特殊字符串赋值

特殊字符串的赋值，例如引用HTML或者长SQL语句的时候，可以使用``'''``

```python
mySQL = ('''
		 ……	
	     ……
         ''')
#用三引号来定义字符串
```

##### 字符串的操作

1.字符串的访问

```python
变量名[起始索引号:终止索引号]
```

```python
#常用的一些操作
char[0]		#取出第一个元素
char[1:]	#取出第二个元素之后的所有元素
char[:-1]	#取出到倒数第二个一个元素
```

2.修改字符串中的元素

可以在字符串首尾添加元素，但是不能删除或者改变字符串的元素

```python
char = '2121017'
char_new = char + char
char_new = char.replace('21', '')
```

#### 2.3列表和元组

列表和元组的区别在于：列表可更改，但是元组是不可更改的

列表索引号的规则和字符串是一样的

| 0    | 1    | 2    | 3    | 4    |
| ---- | ---- | ---- | ---- | ---- |
| 我   | 是   | 遣   | 黄   | 耳   |
| -5   | -4   | -3   | -2   | -1   |

##### 列表

1.列表的创建

列表一般这样创建：

```python
变量名 = []
```

2.列表元素

```python
列表名[起始索引号:终止索引号]
#选择列表元素，遵循左闭右开，和字符串是一样的
```

3.删除列表

一般用``del``来删除一个列表

4.操作列表当中的元素

```python
bool(列表名)		#判断列表是否为空
列表名.index('元素')		#查找该元素的索引号
列表名.count('元素')		#统计字符串中元素出现的次数
列表名.append(元素)		#在列表尾部添加一个元素
列表名.extend([多个元素列表] or 列表名)	#在列表尾部添加多个元素 or 合并两个列表
列表名.insert(索引号，元素)		#在列表指定索引号位置插入元素
列表 + 列表			#对两个列表元素相加
列表 * n  		 #重复一个列表n次
列表名 = [list1, list2]	#列表嵌套
列表名[索引号] = '新元素'	#改变指定元素
列表名.pop(元素索引号) or del 列表名[元素索引号]		#删除指定元素
列表名.remove(元素)		#删除列表中的元素，如果没有该元素会报错
列表名.clear()
```

5.列表切片

```python
列表名[起始索引号:切片终止索引号:步长]
#切片遵循左开右闭
#常用的一些操作
列表名[::-1]		#倒叙切片
#注意当切片起始索引号大于终止索引号，不会提示越界错误
```

##### 元组

1.元组的创建

```
元组名 = (元素1,元素2，……)
```

在不引起歧义的情况下，元组的创建可以不用加()

2.元素访问

```
元组名[索引号]
```

3.删除元组

由于元组中的元素不能够改变，所以元组中的元素不能删除，但是可以删除整个元组

```
del 元组名
```

4.元组的操作

```
连接元组 = 元组1 + 元组2
#元组无法操作元组当中的元素
```



#### 2.4字典和集合

##### 字典

1.字典的组成

```python
字典名 = {键1:值1,键2:值2,……}
```

字典是键值对元组的集合，元素之间没有顺序，但是不能重复。

键可以是字符串、数字、元组等数据类型

当键有重复的话，最后一个键值对会替换前面的键值对；但是值可以是任何数据类型

```
dict1 = {(80,90,85): '优良', 60: '及格'}
```

2.操作字典元素

通过字典的键名访问字典元素

```
字典名[键名]
```

修改字典中的元素

```
dict[键名] = 值	#修改键对应的值
dict[新键名] = 新值	#在字典尾部添加一个键值对
```

##### 集合(set)

1.创建集合

```
集合名 = {元素1, 元素2, ……}
```

集合可以添加或删除元素，集合内的元素不能重复，集合是一种无序的储存结构

2.操作集合中的元素

```
set_1 = {}
set_1.add()		#添加元素
set_1.remove()	#删除元素
```

3.集合的运算

| set1 & set2                 | 交运算，保留相同的元素                                       |
| --------------------------- | ------------------------------------------------------------ |
| set1 \| set2                | 并运算，保留所有元素，去重                                   |
| set1 - set2                 | 补运算，保留不同的元素（是保留set1当中的元素且与set2当中不同的元素） |
| set1 ^ set2                 | 对称补运算，保留两个集合中不同的元素                         |
| set1 > set2 and set1 < set2 | 判断集合间的子集关系（小的是子集）                           |
| set1 == set2                | 判断两个集合是否相同                                         |



### 3.各种程序语句

#### 3.1导入语句

1.import 与 from...import

在 python 用 import 或者 from...import 来导入相应的模块。

将整个模块(somemodule)导入，格式为： import somemodule

从某个模块中导入某个函数,格式为： from somemodule import somefunction

从某个模块中导入多个函数,格式为： from somemodule import firstfunc, secondfunc, thirdfunc

将某个模块中的全部函数导入，格式为： from somemodule import *



2.模块路径查找

sys库可以查找路径。

```
import sys
sys.path		#输出当前路径设置
######
print(库名)	#也可以查看库的地址

insert()	#可以临时添加新路径
```

#### 3.2赋值语句

特殊赋值语句

```
A = (1, 2, 3)
x, y, z = A
#将元组的元素赋值
x, y, z = 1, 'a', "asdasda"
#同时赋值多个变量
```

变量交换

```
x, y = 10, 20
x, y = y, x
```

变量增量赋值

```python
x += 1
x *= 3
x -= 1
x %= 3
s = 'world'
s += 'Hello'
s *= 2			#字符串两次赋值为 world world
```

#### 3.3输入输出语句

1.input()函数

功能是读取输入数据，并返回一个字符串

2.eval()函数

从键盘读取多个数据

```python
a, b, c = eval(input("输入三个数据，数据间用逗号隔开："))		#输入少于变量个数会出错
x, y = eval(input("数字 x = ：")), eval(input("数字 y = ："))
```

3.print()函数

```python
love = 5201314
print('爱情计算值：', love)

print('教室面积是%10d平方米' %(80))		#%10d 右对齐，占位符占10位，#-10d 左对齐，占位符占10位

```

4.格式化输出{:}.format()函数

``{0:[填充字符] [对齐参数] [宽度]}.format()``

< 为左对齐；> 为右对齐；^ 为居中

```
'{0:>10}'.format('计算机')
'{0:= ^10}'.format('计算机')
其他的用法上网看吧
```

format() 方法格式化指定的值，并将其插入字符串的占位符内。

占位符使用大括号 {} 定义。请在下面的“占位符”部分中了解有关占位符的更多信息。

format() 方法返回格式化的字符串。

也可以作为占位字符输出

```python
a = 1
b = 2
print("woshi{},suoyini{}").format(a, b)
```

#### 3.4条件判断语句

if 条件语句判断

```python
if 条件表达式：
	语句1
```

```python
if 条件表达式：
	语句1
else：
	语句2
```

```
if 条件表达式1：
	语句1
elif 条件表达式2：
	语句2
……
```

#### 3.5循环语句

1.for循环

```
for 临时变量 in 序列：
	循环语句
	
for 临时变量 in range(起始索引值，终止索引值，步长)
	循环语句
```

2.for循环的列表推导式

```
表达式 for 临时变量 in 列表
表达式 for 临时变量 in 列表 if 条件

ls = []
ls = [i * i for i in ls]

ls = []
print('{}').format([s for s in ls if s >= 80 and s <= 90])
```

3.while 循环结构

```
while 条件表达式:
	循环语句块
	
continue 和 break 在c当中是一样的
```



### 4.函数程序

#### 4.1python内置常用函数

|                                                              |                                                              | 内置函数                                                     |                                                              |                                                              |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| [`abs()`](https://docs.python.org/zh-cn/3.7/library/functions.html#abs)返回绝对值 | [`delattr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#delattr)删除对象属性 | [`hash()`](https://docs.python.org/zh-cn/3.7/library/functions.html#hash) | [`memoryview()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-memoryview) | [`set()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-set) |
| [`all()`](https://docs.python.org/zh-cn/3.7/library/functions.html#all)对象是否全为True | [`dict()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-dict)转换为字典 | [`help()`](https://docs.python.org/zh-cn/3.7/library/functions.html#help) | [`min()`](https://docs.python.org/zh-cn/3.7/library/functions.html#min) | [`setattr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#setattr) |
| [`any()`](https://docs.python.org/zh-cn/3.7/library/functions.html#any)对象是否全为false | [`dir()`](https://docs.python.org/zh-cn/3.7/library/functions.html#dir) | [`hex()`](https://docs.python.org/zh-cn/3.7/library/functions.html#hex) | [`next()`](https://docs.python.org/zh-cn/3.7/library/functions.html#next) | [`slice()`](https://docs.python.org/zh-cn/3.7/library/functions.html#slice) |
| [`ascii()`](https://docs.python.org/zh-cn/3.7/library/functions.html#ascii)返回对象字符串 | [`divmod()`](https://docs.python.org/zh-cn/3.7/library/functions.html#divmod) | [`id()`](https://docs.python.org/zh-cn/3.7/library/functions.html#id) | [`object()`](https://docs.python.org/zh-cn/3.7/library/functions.html#object) | [`sorted()`](https://docs.python.org/zh-cn/3.7/library/functions.html#sorted) |
| [`bin()`](https://docs.python.org/zh-cn/3.7/library/functions.html#bin)返回整数的二进制 | [`enumerate()`](https://docs.python.org/zh-cn/3.7/library/functions.html#enumerate) | [`input()`](https://docs.python.org/zh-cn/3.7/library/functions.html#input) | [`oct()`](https://docs.python.org/zh-cn/3.7/library/functions.html#oct) | [`staticmethod()`](https://docs.python.org/zh-cn/3.7/library/functions.html#staticmethod) |
| [`bool()`](https://docs.python.org/zh-cn/3.7/library/functions.html#bool)转换为布尔值 | [`eval()`](https://docs.python.org/zh-cn/3.7/library/functions.html#eval) | [`int()`](https://docs.python.org/zh-cn/3.7/library/functions.html#int) | [`open()`](https://docs.python.org/zh-cn/3.7/library/functions.html#open) | [`str()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-str) |
| [`breakpoint()`](https://docs.python.org/zh-cn/3.7/library/functions.html#breakpoint)此函数会在调用时将你陷入调试器中 | [`exec()`](https://docs.python.org/zh-cn/3.7/library/functions.html#exec) | [`isinstance()`](https://docs.python.org/zh-cn/3.7/library/functions.html#isinstance) | [`ord()`](https://docs.python.org/zh-cn/3.7/library/functions.html#ord) | [`sum()`](https://docs.python.org/zh-cn/3.7/library/functions.html#sum) |
| [`bytearray()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-bytearray)范围对象字节数组 | [`filter()`](https://docs.python.org/zh-cn/3.7/library/functions.html#filter) | [`issubclass()`](https://docs.python.org/zh-cn/3.7/library/functions.html#issubclass) | [`pow()`](https://docs.python.org/zh-cn/3.7/library/functions.html#pow) | [`super()`](https://docs.python.org/zh-cn/3.7/library/functions.html#super) |
| [`bytes()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-bytes)返回对象字节码 | [`float()`](https://docs.python.org/zh-cn/3.7/library/functions.html#float) | [`iter()`](https://docs.python.org/zh-cn/3.7/library/functions.html#iter) | [`print()`](https://docs.python.org/zh-cn/3.7/library/functions.html#print) | [`tuple()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-tuple) |
| [`callable()`](https://docs.python.org/zh-cn/3.7/library/functions.html#callable)对象是否可调用 | [`format()`](https://docs.python.org/zh-cn/3.7/library/functions.html#format) | [`len()`](https://docs.python.org/zh-cn/3.7/library/functions.html#len) | [`property()`](https://docs.python.org/zh-cn/3.7/library/functions.html#property) | [`type()`](https://docs.python.org/zh-cn/3.7/library/functions.html#type) |
| [`chr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#chr)返回整数对应的字符 | [`frozenset()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-frozenset) | [`list()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-list) | [`range()`](https://docs.python.org/zh-cn/3.7/library/functions.html#func-range) | [`vars()`](https://docs.python.org/zh-cn/3.7/library/functions.html#vars) |
| [`classmethod()`](https://docs.python.org/zh-cn/3.7/library/functions.html#classmethod)对象无需实例化 | [`getattr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#getattr) | [`locals()`](https://docs.python.org/zh-cn/3.7/library/functions.html#locals) | [`repr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#repr) | [`zip()`](https://docs.python.org/zh-cn/3.7/library/functions.html#zip) |
| [`compile()`](https://docs.python.org/zh-cn/3.7/library/functions.html#compile)编译为字节码 | [`globals()`](https://docs.python.org/zh-cn/3.7/library/functions.html#globals) | [`map()`](https://docs.python.org/zh-cn/3.7/library/functions.html#map) | [`reversed()`](https://docs.python.org/zh-cn/3.7/library/functions.html#reversed) | [`__import__()`](https://docs.python.org/zh-cn/3.7/library/functions.html#__import__) |
| [`complex()`](https://docs.python.org/zh-cn/3.7/library/functions.html#complex)复数转换为字符串 | [`hasattr()`](https://docs.python.org/zh-cn/3.7/library/functions.html#hasattr) | [`max()`](https://docs.python.org/zh-cn/3.7/library/functions.html#max) | [`round()`](https://docs.python.org/zh-cn/3.7/library/functions.html#round) |                                                              |

python自带的常用的库

| math       | 有常用的数学公式 |
| ---------- | ---------------- |
| random     | 生成随机数的库   |
| statistics | 数据统计处理     |
| datetime   | 日期和时间处理   |
| calendar   | 日历功能         |

#### 4.2自定义函数

格式：

```
def 函数名(形式参数):
	函数体
	return 返回值
	
调用时要保证形式参数和实际参数保持数据类型一致，格式一致
```

鸭子类型：当多个数据类型可以进行相同的运算，函数操作，这一类数据类型就统称鸭子类型

参数的设置

```
形式参数：就是和函数下面定义的类型一样
默认参数：默认参数，相当于常量（形参名=默认值），没有按照设定地输入，有的话按照输入的进行
可变参数：{
		1.形参变量名前加一个星号(*),表示元组关键字参数(关键字名称自定)
		2.形参变量名前加两个星号(**)，表示字典关键字参数		
}
```



#### 4.3变量

变量有着一定的作用范围（作用域），所以变量分为两类：

```
1.全局变量：{
		1.1 定义在函数体外的是全局变量
		1.2 在函数体内用global 来定义全局变量
}
2.局部变量：在函数内部定义使用的变量
```

#### 4.4调用函数模块（自己写的库）

库默认在\Python\Lib\sit-packages 目录下

创建模块包：创建一个目录，目录包括一组py文件和一个内容为空的_int\_.py (标识这是一个包)

但是在使用import的时候，避免出现不在同一目录下引用的情况

```
例如：
Tree
|____ m1.py
|____ m2.py
|____ Branch
     |____m3.py
     |____m4.py
```

1.先建立一个文件夹Tree作为工作目录，并在其内建立两个文件m1.py和m2.py，在m1.py写入代码：

```python3
import os
import m2
m2.printSelf()
```

在m2.py写入代码：

```text
def printSelf():
	print('In m2')
```

`import module_name`。即import后直接接模块名。在这种情况下，Python会在两个地方寻找这个模块，第一是sys.path（通过运行代码`import sys; print(sys.path)`查看），os这个模块所在的目录就在列表sys.path中，一般安装的Python库的目录都可以在sys.path中找到（前提是要将Python的安装目录添加到电脑的环境变量），所以对于安装好的库，我们直接import即可。第二个地方就是运行文件（这里是m1.py）所在的目录，因为m2.py和运行文件在同一目录下，所以上述写法没有问题。

2.

```text
def printSelf():
	print('In m3')
```

如何在m1中导入m3.py呢，请看更改后的m1.py：

```text
from Branch import m3
m3.printSelf()

也可以这么写
import Branch.m3
但是不能写
import m3
#因为不在同一目录下
```

总结import语句的第二种用法：

`from package_name import module_name`。一般把模块组成的集合称为包（package）。与第一种写法类似，Python会在sys.path和运行文件目录这两个地方寻找包，然后导入包中名为module_name的模块。

#### 4.5程序迭代和递归

1.迭代就是通过循环处理的过程

求1 + 2！+ 3！+ …… + 10！

```python
sum = 0
number_init = 1
for i in range(1, 11):
	number_init *= i
	sum += number_init
print("结果是"，sum)
```

2.递归是指在函数中调用自己

小和尚讲故事

```python
def story(story_list):
	print(story_list)
	return (story_list)
mystory_list = []
story(mystory_list)
	
```

#### 4.6函数程序设计和原理

1.python的内存管理机制

python解释器会自动回收内存垃圾

（剩下的自己看看python原理吧，懒得写了）











# Python深入学习

## 正则表达式

正则表达式是一种用来筛选字符串的处理语言

```
"^([内容]{长度})([内容]{长度})...$"
```

`^`表示正则表达式开始 `$`表示正则表达式结束

![](https://www.runoob.com/wp-content/uploads/2018/09/regexp-cn.png)



正则表达式运算符

常用元字符

| \w   | 匹配字母、数字、下划线等字符 |
| ---- | ---------------------------- |
| \s+  | 匹配任意空白符（\t \n...）   |
| \d   | 匹配数字                     |
| \b   | 匹配单词的开始或结束         |
| \|   | 或                           |
| \    | 转义                         |

常用反义元字符

| \W      | 匹配的不是字母、数字、下划线、汉字等字符 |
| ------- | ---------------------------------------- |
| \S      | 匹配任意不是空白符的字符                 |
| \D      | 匹配任意非数字的字符                     |
| \B      | 匹配不是单词开头或结束的位置             |
| [^x]    | 匹配除了x以外的任意字符                  |
| [^abcd] | 匹配除了abcd以外的任意字符               |

| 元字符 | 说明                            | 元字符 | 说明                                 |
| ------ | ------------------------------- | ------ | ------------------------------------ |
| ^或\A  | 匹配字符串开始，例如"^[a-z]+ $" | ( )    | 匹配区域                             |
| $或\Z  | 匹配字符串结束                  | [ ]    | 包含，如[\\u4e00-\\u9fa5],匹配汉字   |
| .      | 匹配除换行外的任意单个字符      | [^]    | 不包含，如\[^\t\n],不包含空行和回车1 |
| *      | 对他前面的正则式匹配0到任意次   | {n}    | 匹配n个；但少于n个时会匹配失败       |
| +      | 对他前面的正则式匹配1到任意次   | {n, m} | 匹配n～m次，尽量多，如"^\d{n, m}$"   |
| ?      | 对他前面的正则式匹配0到1次      | -      | 指定两个字符中间范围，如[0-9]        |

### python如何使用re

一般先将正则表达式编译为pattern（正则模板）；然后使用pattern模板处理文本，并获得匹配结果

## python杂项

### pep规范

现在一般遵循pep8规范



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







### 等待用户输入

执行下面的程序在按回车键后就会等待用户输入：

```python
input("\n\n按下 enter 键后退出。")
```

以上代码中 ，\n\n 在结果输出前会输出两个新的空行。一旦用户按下 **enter** 键时，程序将退出。





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