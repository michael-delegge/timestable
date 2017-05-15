#include <stdio.h>

int main()
{
	int i = 8, j;
	while (i > 0) {
		j = 1;
			while (j < i) {
			printf("%4d",j );
			j++;
		}
		printf("\n");
		i--;
		}
}
