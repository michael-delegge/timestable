#include <stdio.h>

int main()
{
	int i;

	while ((i = getchar()) != EOF) {
		if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z') {
			putchar(i);
		}
	}
		
}
