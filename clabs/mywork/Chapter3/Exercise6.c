#include <stdio.h>

int main()
{

	int i, sum = 0;

	while (i <= 100) {
		sum = sum + i;
		i = i + 5;
	}
	printf("%d\n", sum);
}
