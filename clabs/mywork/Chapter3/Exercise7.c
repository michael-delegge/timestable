#include <stdio.h>

int main()
{
	for (int i = 1; i < 8; i++) {
		for (int j = 0; j < i; j++)
			printf("%4d", i - j );
		printf("\n");
		}
}