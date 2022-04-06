/*************************************************************************
    > File Name: practice_17.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年04月06日 星期三 08时36分42秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int year;
	printf("请输入要判断的年份:\n");
	scanf("%d",&year);
	if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)){
		printf("该年是闰年\n");
	}
	else{
		printf("该年不是闰年\n");
	}
	return 0;
}

