#include <stdio.h>
int main()
{
	int count = 0;
	printf("Please input a sentence: ");
	while(getchar() != '\n')
	{
		count ++;
	}
	printf("These are %d char!\n", count);
	return 0;
}
