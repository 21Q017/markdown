#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);	//&的作用:取i的地址(指针会学)//
    if (i >= 18)
    {
	    printf("TURE\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}


