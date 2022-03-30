/*************************************************************************
    > File Name: practice_14.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月29日 星期二 20时08分23秒
 ************************************************************************/

#include<stdio.h>

int main(){
        int a, b, c;

        printf("这是一个判断三角形类型的程序\n");
        printf("下面请输入要判断三角形的三边: \n");
        printf("输入a边的长度: \n");
        scanf("%d",&a);
        printf("输入b边的长度: \n");
        scanf("%d",&b);
        printf("输入c边的长度: \n");
        scanf("%d",&c);
        if((a + b > c) && (b + c > a) && (a + c > b) ){
                printf("这是一个三角形\n");
                switch(1){
                	case((a == b) && (b == c) && (c == a)):printf("这还是一个等边三角形\n");break;
                	case((a == b) || (b == c) || (a == c)):printf("这还是一个等边三角形\n");break;
                 	case((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)):printf("这还是一个直角三角形\n");break;
                 	case((a*a + b*b > c*c) || (a*a + c*c > b*b) || (c*c + b*b > a*a)):printf("这同时是一个钝角三角形");break;
                 	case((a*a + b*b < c*c) || (a*a + c*c < b*b) || (c*c + b*b < a*a)):printf("这同时是一个锐角三角形");break;
                 	default: ; break;
                }
             
        else{
                printf("这不是一个三角形\n");
        }
    return 0;

}

