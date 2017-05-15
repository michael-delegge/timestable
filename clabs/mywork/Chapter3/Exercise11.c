#include <stdio.h>

int main()
{
	int i = 1;
	int fact = 1;
	
	while (i <= 10) {
		fact *= i;
		printf("%d factorial is %d\n",i, fact);
		i++;
		}
	printf("\n");
}
