#include <stdio.h>
#include <string.h>

#define ALPHA 1
#define LINE_SIZE 100

int mystrcomp(char string1[], char string2[]);

int main()
{
	int results;
	char line[LINE_SIZE];
	char line2[LINE_SIZE];

	printf("Enter a string to compare: ");	
	fgets(line, LINE_SIZE, stdin);
	line[strlen(line) - 1] = '\0';
	
	printf("Enter another string to compare: ");	
	fgets(line2, LINE_SIZE, stdin);
	line2[strlen(line2) - 1] = '\0';
	
	results = mystrcomp(line, line2);
    
    if (results == ALPHA) {
        printf("String equal\n");
    } else {
        printf("Strings not equal\n");
    }
}

int mystrcomp(char string1[], char string2[])
{
	int i;

	for (i = 0; string1[i] == string2[i]; i++) {
		if (string1[i++] == '\0') {
			return(ALPHA);
		}
	}
	return(0);
}
