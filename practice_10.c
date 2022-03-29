/*************************************************************************
    > File Name: practice_10.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月25日 星期五 15时41分20秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
  char string_one[] = "zheshiyigezifuchuan";
  char string_two[50];
  strncpy(string_two, string_one, 10);
  printf("%s\n", string_one);
  printf("%s\n", string_two);
  return 0;
}
