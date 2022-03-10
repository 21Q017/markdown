#include <stdio.h>
int main()
{
    int result = 3;
    int number_add = 3;
    while(number_add <= 9)
	{
	    
	    number_add = number_add + 2;
	    printf("%d\n", number_add);	
            result = result * number_add;	
	}
    printf("%d\n", result);
    return 0;
}
