/*************************************************************************
    > File Name: practice_13.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月29日 星期二 19时29分18秒
 ************************************************************************/

#include<stdio.h>

int main(){
	float a, b, c;

	printf("这是一个判断三角形类型的程序\n");
	printf("下面请输入要判断三角形的三边: \n");
	printf("输入a边的长度: \n");
	scanf("%f",&a);
	printf("输入b边的长度: \n");
	scanf("%f",&b);
	printf("输入c边的长度: \n");
	scanf("%f",&c);
	if((a + b > c) && (b + c > a) && (a + c > b) ){
		printf("这是一个三角形\n");
		if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)){
			printf("这还是一个直角三角形\n");
			if((a == b) || (b == c) || (a == c)){
                printf("这同时是一个等腰三角形\n");
			}
			else{
				return 0;
			}
		}
		else if((a*a + b*b < c*c) || (a*a + c*c < b*b) || (c*c + b*b < a*a)){
            printf("这同时是一个钝角三角形\n");
			if((a == b) || (b == c) || (a == c)){
                printf("这还是一个等腰三角形\n");
			}
			else{
				return 0;
			}
        }
		else if((a*a + b*b > c*c) || (a*a + c*c > b*b) || (c*c + b*b > a*a)){
			printf("这同时是一个锐角三角形\n");
			if((a == b) && (b == c) && (c == a)){
                printf("这还是一个等边三角形\n");
            }
			else if((a == b) || (b == c) || (a == c)){
                printf("这还是一个等腰三角形\n");
            }
			else{
				return 0;
			}
		}

	}
	else{
		printf("这不是一个三角形\n");
	}		
    return 0;

}
