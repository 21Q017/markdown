/*************************************************************************
    > File Name: practice_19.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年04月13日 星期三 08时12分12秒
 ************************************************************************/
//c语言练习实例3：思路：让这个整数数以一个数字结果等于这个数字即可，两次都能相等的输出//
#include<stdio.h>
int main(){
	int i = 0;
	int k = 0;
	for(i = 0,k = 0;k==0; i++, k++);
	{
		printf("%d", i);
		k++;
	}
	printf("%d", k);
	printf("%d", i);
	return 0;
}


