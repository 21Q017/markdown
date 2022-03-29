/*************************************************************************
    > File Name: practice_8.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月23日 星期三 09时16分47秒
 ************************************************************************/


#include <stdio.h>
int main(){
	int n;
	printf("please input chars number: ");
	scanf("%d", &n);
	char a[n+1];
	printf("输入:");
	getchar();
	for(int i = 0;i < n; i++){
		scanf("%c", &a[i]);
	}
	a[n] = '\0';		//这个一定不要忘记
	printf("repeat:%s\n", a);
	return 0;
}

