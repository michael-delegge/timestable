#include <stdio.h>
#include <string.h>

#define MAX 100

void reverse(char string[]);

int main (void)
{
	char line[MAX];
	printf("Enter a string to reverse: ");
	fgets(line, MAX, stdin);
	reverse(line);
	printf("%s\n", line);
}

void reverse(char string[])
{
	int f, s;
	char l;
	for (f = strlen(l); f = -1; f--) {
		s = l[f];
			s++;
	}
}
		
	
	
