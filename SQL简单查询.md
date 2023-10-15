# SQL简单查询

登录数据库

```sql
mysql -uroot -p
输入密码:
```

设置中文字符

```sql
Set character_set_database='utf8';
Set character_set_server='utf8';
```

1.创建数据库

```sql
create database demo;
use demo;
```

2.创建数据表

```sql
create table  score(
id int  primary key ,
class int,
name varchar(255),
chinese double,
math double,
english double);
```

3.插入数据

```sql
insert into score values (1,1,'关羽',85,56,70);
insert into score values (2,2,'张飞',70,75,70);
insert into score values (3,2,'赵云',90,65,95);
insert into score values (4,3,'刘备',97,50,50);
insert into score values (5,1,'曹操',88,90,80);
insert into score values (6,1,'司马懿',80,48,86);
insert into score values (7,3,'吕布',67,98,70);
insert into score values (8,2,'貂蝉',90,75,80);
insert into score values (9,2,'诸葛亮',100,98,100);
insert into score values (10,2,'诸葛亮',100,98,98);
```

## 2.基础查询select

```sql
2.1 查询所有数据
select * from 表名;
2.2 查询某一列数据；
select 列名 from 表名;
2.3 查询指定多列数据；
select 列名1，列名2…… from 表名;


select * from score;
select math from score;
select name,math from score;
```

## 3.去重 distinct

```sql
3.1 检索不同的值，查看去重后的成绩信息。
select distinct 列名 from 表名


select distinct math from score;
select distinct name,math from score;
```

## 4.排序order by

```sql
4.1 对数据成绩进行排序。默认升序
select 列名 from 表名 order by 列名1，列名2 asc/desc

select name,math from score order by math;
select name,math from score order by math desc;
select name,math,chinese from score order by math desc,chinese desc;
```

## 5.限制结果limit

```sql
limit关键词可限制查询行数。
返回表的前n行：select 列名 from 表名 limit n；
返回表的特定行：select 列名 from 表明 limit n,m;(从n+1行开始，返回m行)



select * from score limit 5;
select * from score limit 5,3;
```

## 6.过滤查询where

### 1.比较运算< > = !=

```sql
1.1 WHERE语句能选出特定范围的数据，分为三类：
①大于，②小于，③大于且小于

select * from score where chinese>90;
select * from score where chinese<60;
select * from score where chinese>90 and chinese<60;
1.2 WHERE语句能选出等于特定数值或文字的数据。

select * from score where chinese = 90;
select * from score where name = "关羽";
select * from score where name != "关羽";
```

### 2.指定范围between

```sql
在指定的两个值之间。
2.1 查看语文成绩在80-90之间的数据信息
select * from score where chinese between 80 and 90;
```

### 3.逻辑运算 and or not in /not in

```sql
and操作符：多个条件同时成立
3.1 查看语文成绩大于60并小于90的数据信息
select * from score where chinese>60 and chinese<90;

or操作符：多个条件任一成立
3.2 查看语文成绩小于60或者大于90的数据信息
select * from score where chinese<60 or chinese>90;

not操作符：不成立
3.3 查看语文成绩不为100的数据信息
select * from score where not(chinese = 100);

in操作符：允许where子句规定多个值，显示在in列表中的值，类似于or;
3.4 查看语文成绩为80、90的数据信息
select * from score where chinese=80 or chinese=90;
select * from score where chinese in(80,90)

not in 操作符: where子句规定的值之外的数；
select * from score where chinese not in(80,90);
```

### 4.空值 null

```sql
null值为遗漏的未知数据，用于判断是否为空；
4.1 查找语文成绩为空的数据
select * from score where chinese is null;

4.2 查找语文成绩不为空的数据
select * from score where chinese is not null;
```

## 7.模糊匹配 like % _

```sql
%通配符：表示任意字符出现任意次数。
5.1 查看所有“姓张的”的成绩信息；
select * from score where name like "张%";
_通配符：只匹配单个字符而不是多个字符。
5.2 查看所有“姓张的”，且姓名为两个字的人员的成绩信息；
select * from score where name like "张_";
```

## 8.别名 as

```sql
别名用于为表或表中的列提供临时名称，具有可读性，只存在于查询期间。
表名：select 列名 from 表名 as 别名;
列名：select 列名 as 别名 from 表名;
混合使用：select 列名 as 别名 from 表名 as 别名;

8.1 对表名设置别名
select s.name from score as s;
8.2 对列名设置别名
select name as 姓名,chinese 语文,math 数学 from score;
8.3 对表名、列名分别设置别名
select s.name as 姓名 from score as s;
```

## 9.正则表达式

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-07-00-18-07-image.png)

# SQL复杂查询

## 1.统计字段

```sql
统计每个学生的成绩总分。
字段之间可以进行“加减乘除”运算
select name 姓名,(chinese+math+english) 总分 from score;
```

## 2.拼接字段

```sql
1.将表中姓名和班级连起来，格式为：张飞（2）;
select concat(name,class) from score;
select concat(name,'(',class')') from score;
2.指定分隔符(-)对数据中姓名、语数外进行连接。
concat_ws()==concat with separator
selectconcat_ws('_',name,chinese,math,english) from score;
```

## 3.聚合函数

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-06-23-21-32-image.png)

```sql
1.计算各班级学生数学平均成绩
select class,avg(math) from score group by class;
2.计算1班中语文最高分
select max(chinese) from score where class=1;
```

## 4.文本处理函数

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-10-10-48-51-image.png)

## 5.日期处理函数

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-10-10-49-30-image.png)

## 6.数值处理函数

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-10-10-50-00-image.png)

## 7.分组

```sql
GROUP BY关键词可对数据进行分组，HAVING可对分组后的数据进行过滤。

1.计算各班级学生数学平均成绩
select class,avg(math) from score group by class;
2.计算数学平均分80以上的班级
select class,avg(math) from score group by class having avg(math)>80;
```

## 8.case when检索查询

case when搜索语句是一种条件表达式，可以实现对定量数据的定行描述。

简单的case when函数如下：

```sql
case score  when 'A' then '优' else '不及格' end
case score  when 'B' then '良' else '不及格' end
case score  when 'C' then '中' else '不及格' end
```

等同于，使用case when条件表达式函数实现：

```sql
case when score = 'A' then '优'
when score = 'B' then '良'
when score = 'C' then '中' else '不及格' end
```

注意：then后边的值与else后边的值类型应一致，否则会报错。

```sql
case score when 'A' then '优' else 0 end
```

```sql
1.对英语成绩进行划分，>90为优秀，<=90 and >=60为良好，<60为不及格。  
select english,(case when english>90 then '优秀'
                     when english<69 then '不及格'
                     else '良好' end ) grade
from score;
2.对英语成绩进行划分，>90为优秀，<60为不及格，null为缺考，其他为良好。 
select english,(case when english>90 then '优秀'
                     when english<69 then '不及格'
                     when english is null then '缺考'
                     else '良好' end ) grade
from score; 
3.对英语成绩进行评估，统计有多少学生成绩为优秀
select t1.english,t1.grade,(
    case when t1.grade='优秀' then 1 else 0 end
) as num from(
select english,(case when english>90 then '优秀'
                     when english<69 then '不及格'
                     when english is null then '缺考'
                     else '良好' end ) grade
from score) as t1; 
select count(num=1) from score;
select sum(case when english>90 then 1 else 0 end)as num from score;
```

![](C:\Users\21Q017\AppData\Roaming\marktext\images\2023-06-10-11-08-10-image.png)

## 6.视图

视图是基于 SQL 语句的结果集的可视化的表，视图包含行和列，就像一个真实的表。

语法结构：

```sql
create view 视图名称(<视图列名1>,<视图列名2>,......) as <select 查询语句>;

create view 班级人数(班级,人数) as select class,count(*) from score
    group by class;
```

如何使用视图？

```
视图是一张虚拟表，视图的字段由用户自定义；
创建的视图会跟随着原始数据的变动实时更新；
视图只供查询，数据不可更改；
使用select查询语句选择要查询的数据表也可使选择对已生成的视图查询；
若要查询的数据表为某种经常要查询的数据可建立为SQL视图，避免每次重复查询；
避免在SQL视图的基础上再次新建SQL视图，会降低SQL的效能。
```

1.创建视图名为‘班级人数’，按照班级分组，进行各班人数计数。

## 7.子查询

将一个查询语句包含在另一个查询语句中，那么这个查询语句就是子查询语句。可以认为是将定义视图的select语句直接用于from子句中。  
子查询可嵌套在各个位置，但在实际工作中主要在SELECT、WHERE、HAVING之后。

执行顺序：先执行内层查询，再执行外层查询。

业务场景：哪些学生的数学成绩比“张飞”的高？

```sql
select name,math from score where 
    math>(select math from score where name='张飞')；
```

### 8.关联子查询

在细分的组内进行比较时，使用关联子查询。  
关联子查询的执行逻辑和通常的SELECT语句的执行逻辑完全不一样。

基本逻辑:  
对于外部查询返回的每一行数据，内部查询都要执行一次。在关联子查询中是信息流是双向的。  
外部查询的每行数据传递一个值给子查询，然后子查询为每一行数据执行一次并返回它的记录。然后，外部查询根据返回的记录做出决策。

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220401/bjveyovr_gzzursN9dPYDg6cGDK1e)

1.筛选出各班级中高于班级数学平均分的人员信息。

```sql
select class,name,math from score as t1
        where math>(select avg(math) from score as t2
               where t1.class=t2.class
                    group by class)
                        order by class;
```

# 多表查询

支持中文字符：

```
Set character_set_database='utf8';
Set character_set_server='utf8';
```

---

1.创建数据库

```
create database demo;
use demo;
```

2.创建学生数据表student

```
create table student(
           stuid int primary key ,
           student varchar(255));
```

3.插入学生数据

```
insert into student values (1,'关羽');
insert into student values (2,'张飞');
insert into student values (3,'赵云');
insert into student values (4,'刘备');
insert into student values (5,'曹操');
```

4.创建选课信息表class

```
create table class(
           id int primary key ,
           classname varchar(255),
           stuid int);
```

3.插入选课数据

```
insert into class values (1,'Python编程',1);
insert into class values (2,'SQL分析',4);
insert into class values (3,'WEB前端',3);
insert into class values (4,'统计分析',2); 
insert into class values (5,'机器学习',7);##
```

## 2.内连接

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_UrUdZD6J7pKfUgXxyMEG)  
仅将两个表中满足连接条件的行组合起来作为结果集。在内连接中，只有在两个表中匹配的行才能在结果集中出现。  
格式：SELECT 列名表 FROM 表名1 [INNER] JOIN 表名2 ON或WHERE 条件表达式

需求：使用内连接查询操作列出所有选课学生信息。

```sql
格式：SELECT 列名表 FROM 表名1 [INNER] JOIN 表名2 ON或WHERE 条件表达式
```

## 3.左外连接

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_L6ybIU6JrnvxneY07bxJ)

以左表为基准，在内连接的基础上，包含左表中所有不符合条件的数据行，并在其中的右表列填写NULL。  
格式：SELECT 列名表 FROM 表名1 LEFT JOIN 表名2 ON或WHERE 条件表达式

需求：使用左连接查询所有学生的选课信息。

```sql
格式：SELECT 列名表 FROM 表名1 LEFT JOIN 表名2 ON或WHERE 条件表达式
select * from student left join class on student.stuid=class.stuid;
```

## 4.外连接与条件语句

当在内连接查询中加入条件是，无论是将它加入到join子句，还是加入到where子句，其效果是完全一样的，但对于外连接情况就不同了。

当把条件加入到 join子句时，SQL Server会返回外连接表的全部行，然后使用指定的条件返回第二个表的行。如果将条件放到where子句 中，SQL Server将会首先进行连接操作，然后使用where子句对连接后的行进行筛选。

需求：将条件语句' s.stuid = 1'添加在上步骤左外连接中，比较join和where的不同。

## 5.右外连接

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_SuGquLASoddvl6OrE3P4)

以右表为基准，在内连接的基础上，包含右表中所有不符合条件的数据行，并在其中的左表列填写NULL。  
格式：SELECT 列名表 FROM 表名1 RIGHT JOIN 表名2 ON或WHERE 条件表达式

需求：使用右连接查询所有课程的学生信息。

```sql
格式：SELECT 列名表 FROM 表名1 RIGHT JOIN 表名2 ON或WHERE 条件表达式
select * from student right join class on s.stuid=c.stuid;
```

## 6.全连接

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_uRUsTJEXZkVyFsQO0vK7)

在内连接的基础上，还包含两个表中所有不符合条件的数据行，并在其中的左表、和右表列填写NULL。  
格式：SELECT 列名表 FROM 表名1 FULL JOIN 表名2 ON或WHERE 条件表达式

需求：使用全连接查询所有学生的全部选课信息。

```sql
格式：SELECT 列名表 FROM 表名1 FULL JOIN 表名2 ON或WHERE 条件表达式
select * from student full join class on s.stuid=c.stuid;
但是上面语法的格式mysql不支持，可以使用下面语法：
select * from student right join class on student.stuid=class.stuid
union
select * from student left join class on student.stuid=class.stuid
```

## 7.组合查询

组合查询可实现多个SELECT语句的同时查询，并将查询结果作为单个结果集返回。关键词“UNION”可对结果集进行去重，“UNION ALL”不能对结果集进行去重。  
union：合并两张数据表并去除重复行重合。（加法）  
union all：保留重复行数据。

```sql
select stuid from student
union(all)
select stuid from class;
```

## 8.交叉连接

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_mnPwFfxF2oJ7e23vqnwW)

将两个表的交叉连接，返回左表中的所有行，左表中的每一行与右表中的所有行组合，即这两个表所有数据行的笛卡儿积。

格式：

```
SELECT 列名表 FROM 表名1 CROSS JOIN 表名2;
SELECT 列表名 FROM 表名1，表名2；
```

需求：将两表两两连接，查询结果集。

## 9.模拟函数

窗口函数可以处理数据表中每个数据组的排名筛选（同时具有分组和排序的功能，且不减少原来数据表的行数）  
语法：<窗口函数> over (partition by <用于分组的列名> order by <用于排序的列名>)

- 专用窗口函数：主要包括rank（跳跃排名）, dense_rank（连续排序）, row_number（组内编号）等专用窗口函数；
- 聚合窗口函数：主要包括sum, avg, count, max, min等

注意：窗口函数要写在selectc子查询语句中，因为窗口函数的对Where语句或Group By语句处理后的结果进行查询。

窗口函数是类似于返回聚合值的函数，例如计数、求和等。  
不同的是：窗口函数不会对结果进行分组，输出行数和输入行数一致。

处理相对复杂的报表统计分析场景：部门内KPI排名、topN问题（分组排序/求和等）

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_wS60GaiCzFMNeLZKd507)

需求：整合成绩单中每个班级的人数（仅做了解）

```
select class, count(class) as num 
    from score 
    group by class;
```

![image.png](https://assets.qingjiaoclass.com/gdlzpoyzbkrj/20220418/bjveyovr_MRj1kPb4QeJJE3FFYRYB)
