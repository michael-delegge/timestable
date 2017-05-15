#include <stdio.h>

int main()
{
	int i;

	while ((i = getchar()) != EOF) {
		if (i == '\n') {
			putchar(i);
		}
		putchar(i);
	}
}

