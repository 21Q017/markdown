/*************************************************************************
    > File Name: practice_21.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年04月20日 星期三 09时41分33秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
	char *str = "I LOVE DXZ";
	int i, length;
	length = strlen(str);
	for(i = 0; i < length; i++){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
