/*************************************************************************
    > File Name: practice_15.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月30日 星期三 07时57分02秒
 ************************************************************************/
//计算一个公司的年终奖
//
#include<stdio.h>
int main(){
	double i;
	double bonus10,bonus20,bonus40,bonus60,bonus100,bonus_end;
	printf("本月度你的利润是多少钱呀(输入数字即可): \n");
	scanf("%lf",&i);
	bonus10 = 100000*0.1;
	bonus20 = bonus10 + 200000*0.075;
	bonus40 = bonus20 + 200000*0.05;
	bonus60 = bonus40 + 200000*0.03;
	bonus100 = bonus60 + 400000*0.015;
	if(i<=100000){
		bonus=i*0.1;
	}
	else if(i<=200000 && i>100000){
		bonus=bonus10 + (i-100000)*0.075;
	}
	else if(i<=400000 && i>200000){
		bonus=bonus20 + (i-200000)*0.05;
	}
	else if(i<=600000 && i>400000){
		bonus=bonus40 + (i-400000)*0.03;
	}
	else if(i<=1000000 && i>600000){
		bonus=bonus60 + (i-600000)*0.015;
	}
	else if(i>1000000){
		bonus=bonus100 + (i-1000000)*0.01;
	else{
		return 0;
	}
	}
}
