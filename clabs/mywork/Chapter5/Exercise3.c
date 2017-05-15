#include <stdio.h>
#define MAXLINE 20

int main()
{
	char line[MAXLINE];
	int count = 0;
	int i, c;

	while ((c = getchar()) != EOF) {
		line[count++] = c;
		if (c == '\n') {
			if (count < 20) {
				for (i = 0; i < count; i++) {
					putchar(line[i]);
				}
			}
			count = 0;
		}
	}
}

