/*************************************************************************
    > File Name: practice_20.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年04月20日 星期三 09时05分01秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int x=1,y=0,a=0,b=0;
	switch(x){
		//case 0: printf("123");break;
		case 1: switch(x){
					case 1: a++;
					case 2: b++;
					break;
					};
		case 2: a++,b++;break;
		case 3: a++,b++;break;
	}
	printf("%d %d",a,b);
	return 0;
}
