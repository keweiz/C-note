# 第七章 数组

[TOC]

## 7.0 主要内容

#### 一维数组

#### 二维数组

#### 字符串

## 7.1 一维数组

### 定义

-   定义：需要明确`数组变量名`  `数组元素类型`  `数组大小` 
-   一般形式：类型名 数组名[数组长度]
-   数组是一些具有相同类型的数据的集合，有统一的标识符（数组名），用不同的需要（下标）区分各元素。
-   存储：系统根据数组**元素类型**和**元素个数**在内存中分配一段**连续**存储单元用于存储数组中各个元素，并对这些单元进行连续编号。
-   每个内存单元所需字节数由定义的数组元素类型确定
-   数组名表示该数组所分配连续内存空间中第一个单元的地址，即**首地址**
-   由于数组一经分配后在运行过程中不会改变，因此**数组名是一个地址常量，存放数组内存空间的首地址**


### 引用

-   规定：只能引用单个数组元素，不能引用整个数组
-   下标：数组`a[n]`元素下标的合法范围是`[0,n-1]` 。这些元素在内存中按照下标递增的方式连续存储
-   数组元素的使用方法与同类型的变量完全相同，`int a[n]`中的元素与`int`型变量使用方法完全相同
-   定义与引用区别：定义是`a[n]`的`n`必须是一个常量，因为按照规定，数组长度必须是明确给出的，否则系统无法分配内存空间。而引用时的`a[i]`中`i`可以为变量
-   下标越界：一旦越界，会将数组写到其他变量所占的内存空间，甚至写入程序代码段，造成不可预料的后果。

### 初始化

-   直接赋值
    -   一般形式：`ElemTpye varable [n] = { 初值表 }` 
    -   C语言规定，只有静态存储的数组才能初始化，但是，一般的C编译器都允许对动态存储的数组赋初值

```c
/*全部赋值*/
int a[10] = {1,2,3,4,5,6,7,8,9,10}; //逗号分隔

static int b[5] = {1,2,3,4,5};		//静态数组赋初值
static int b[5];					//静态数组如果未初始化，系统会自动赋0
static int b[5] = {0,0,0,0,0};		//与上式等价

/*部分赋值*/
int c[10] = {0,1};			//数组c[10]的前两个元素给定，其余元素不确定
static int d[20] = {1,2,3}; //数组d[20]的前三个元素给定，其余元素为 0

int a[] = {1,2,3,4,5,6,7,8,9}; //若没有给定长度，则按照赋值的元素个数默认数组长度
```

-   根据用户需要赋值

```c
#include <stdio.h>

int main(void)
{
	int i, a[10];
  	printf("Enter 10 intergers:");
  	for(i = 0;i < 10;i++)
    	scanf("%d",&a[i]);
  	
  	return 0;
}
```

-   数组的应用离不开循环，将数组的下标作为循环变量，通过循环，就可以对数组的所有元素逐个进行处理
-   数组的长度必须在定义时给定，如果无法确定需要需要处理的数据数量，至少也要估计其上限，并将**上限值**作为数组长度


#### 顺序查找法

按照数组下标，从前到后进行查找

#### 选择排序法

-   选择，又称为分类，是程序设计常用的算法，包括**冒泡排序**，**选择排序**等
-   算法步骤：
    -   第`1`步：在未排序的`n`个数`(a[0] - a[n-1])` 中找到最小数，将它与`a[0]`交换
    -   第`2`步：在剩下未排序的`n`个数中`(a[1] - a[n-1])`找到最小数，将它与`a[1]`交换
    -   重复上述步骤
    -   第`n-1`步：再剩下未排序的2个数中`(a[n-2]  a[n-1])`找到最小数，将它与`a[n-2]`交换

## 7.2 二维数组-矩阵

### 定义

-   一般形式：`ElemType varable [row][col];` 
### 引用

-   类似数学中矩阵，用行下标和列下标共同确定一个数组元素
-   存储方式：一行一行存储，即先存放`0`行元素，再存放`...`行元素；每一行的元素是按照列的顺序依次存储
-   注意：二维数组中有`0`行`0`列，而矩阵是从第一行第一列开始的

### 初始化

-   分行赋值
    -   一般形式：`ElemType varable [row][col] = {{初值表1},{初值表2},...,{初值表i},...};` 
    -   把`初值表i`的元素依次赋给第`i`行
    -   二维数组的初始化也可以针对部分元素：动态数组变量未赋初值的元素值不确定，静态数组未赋初值对的元素默认为`0` 

```c
int a[3][2] = { {1,2},{3,4},{5,6} };
static int a[3][2] = { {1,2},{3},{} };
```

-   顺序赋初值
    -   一般形式：`ElemType varable [row][col] = {初值表};` 
    -   根据数组元素在内存中的存放顺序，把初值表中的数据依次赋给数组元素
-   异同：**分行赋值**更加清晰直观，不易出错
-   与一维数组类似，若全部赋值，则可以省略数组长度值，但不建议

## 7.3 字符串数组
-   字符串常量：一对双引号括起来的字符序列，即一串字符，以`'\0'`为结束标志
-   字符串`"Happy"`由6个字符组成，前五个`'H'` `'a'` `'p'` `'p'` `'y'` 是**有效字符**，`'\0'` 是**字符串结束符** 
-   有效长度：字符串有效长度就是有效字符的个数
-   C语言将字符串作为**特殊**的一维数组来处理

#### 字符串的存储--数据初始化

-   字符串可以末尾加`'\0'`后存放在一维字符数组中
-   也可以使用**字符串常量**

```c
//以下三式等价
static char s [6] = {'H','a','p','p','y','\0'};
static char s [6] = {"Happy"};
static char s [6] = "Happy";
```

-   数组长度：字符串存入数组是，由于它有一个结束符`'\0'` ，数组长度至少是字符串有效长度`+1` 
-   如果数组长度大于**字符串有效长度**`+1`，则字符串只占字符数组的前一部分，第一个 `'\0'`后元素的值不能确定，且后续元素与该字符串无关

#### 字符串的操作

将字符串存入一维数组后，对字符串的操作就是对一维字符数组的操作，但与普通一维字符数组的操纵又有所不同。

以遍历字符串和遍历数组为例：数组遍历时以`下标`为循环标志，而字符串没有**显示**地给出有效长度，因此只能用数组元素是否等于`'\0'`来控制循环

#### 字符串的存储--赋值和输入

-   除了可以直接初始化数组，还可以赋值或输入

```c
static char s [80];
s [0] = 'a';
s [1] = 'b';
s [2] = 'c';
s [3] = '\0';
//等价于
s [80] = "abc";
```

-   C语言对`''`和`""`敏感，单引号表示字符，双引号表示字符串
-   **输入的情况有些特殊，`'\0'`代表空操作，无法输入，因此，输入字符串时，需要事先设定一个输入结束符。一旦输入该字符，就表示字符串输入结束，并将输入结束符转换为`'\0'`** 


