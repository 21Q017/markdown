/*************************************************************************
    > File Name: 数字组合.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年05月11日 星期三 09时03分38秒
 ************************************************************************/

/*题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？*/



#include<stdio.h>
int main(){
	int bai, shi, ge, i;
	for(bai = 1; bai < 5; bai++){
		for(shi = 1; shi < 5; shi++){
			for(ge = 1; ge < 5; ge++){
				if(bai != shi && shi != ge && ge != bai){
					printf("%d%d%d \n",bai,shi,ge);
					i++;
				}
			}
		}
	}
	printf("一共有%d个数",i);
	return 0;
}
