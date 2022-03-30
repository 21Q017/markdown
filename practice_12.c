/*************************************************************************
    > File Name: practice_12.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月29日 星期二 18时54分50秒
 ************************************************************************/

#include<stdio.h>
int main(){
	char a = 'F';
	int b = 123;
	char *pa = &a;
	int *pb = &b;
	printf("a = %c\n", *pa);
	printf("b = %d\n", *pb);
	*pa = 'M';
	*pb += 1;
	printf("a = %c\n", *pa);
	printf("b = %d\n", *pb);
	printf("sizeof pa = %ld\n", sizeof(pa));
	printf("sizeof pb = %ld\n", sizeof(pb));
	printf("address of a is: %p\n", pa);
	printf("address of b is: %p\n", pb);
	return 0;
}
