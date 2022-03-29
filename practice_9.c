/*************************************************************************
    > File Name: practice_9.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月25日 星期五 14时25分08秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	char string[] = "woaidongxiaozuo";
	char string_one[52];
	printf("%s\n", string);
	printf("siezof string = %d\n", sizeof(string));
	printf("strlen string = %u\n", strlen(string));
	strncpy(string_one,string, 10);
	//string_one[12] = '\0';
	printf("%s\n", string_one);
	//strcat(string, " ");
	//strncat(string, string_one, 5);
	//string_one[5] = '\0';
	printf("%s\n", string);
	printf("%s\n",string_one);
	printf("sizeof string_one = %d\n", sizeof(string_one));
	printf("strlen string = %u\n", strlen(string_one));
	return 0;
}
