#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int default_10 (void);

int main(int argc, char *argv[])
{
	int horizontal, vertical, header, limit;
	limit = strtol(argv[1], NULL, 10);
	   
	printf (" * ");    
	for (header = 1; header <= limit; ++header) {    
		printf ("%4d   ", header); 
	}   
	printf ("\n");  

  	for (horizontal = 1; horizontal <= limit; ++horizontal){    
      printf ("%4d ", horizontal);    
      for (vertical = 1; vertical <= limit; ++vertical)    
		printf ("%4d   ", horizontal * vertical);    
		printf ("\n");    
	}    
	return 0;    
}
