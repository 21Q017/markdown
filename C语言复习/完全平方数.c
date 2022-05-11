/*************************************************************************
    > File Name: 完全平方数.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年05月11日 星期三 09时15分03秒
 ************************************************************************/
/*一个整数(小于10000)，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少*/

#include<stdio.h>
int main(){
	int zhengshu, daan;
	int i;
	int j;
	for(zhengshu = 1; zhengshu < 10000; zhengshu++){
		zhengshu = zhengshu + 100;
		for(i = 1; i < 101; i++){
			if(zhengshu == i * i){
				zhengshu = zhengshu + 168;
				for(j = 1; j < 103; j++){
					if(zhengshu == j * j){
						daan = zhengshu - 268;
						printf("这是一个符合要求的数，该数为%d\n",daan);
					}
				}
			}

		}
	}
	
	return 0;
}

