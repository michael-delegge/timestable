#include <stdio.h>

int main()
{
	int i, square, cube;
	for (i = 20; i <= 60; i += 2) {
		square = i * i;
		cube = i * i * i;
		printf("%d%10d%10d\n", i, square, cube);
		}
}
