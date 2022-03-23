/*************************************************************************
    > File Name: practice_7.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年03月23日 星期三 08时53分57秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int i, j, k;
	printf("\n");
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<5;k++){
				if(i!=j && j!=k && k!=i){
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}



