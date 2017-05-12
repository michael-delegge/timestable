//Times Tables

#include <stdio.h>
#include <string.h>

int main(void)
{    
  int horizontal, vertical;    

  printf (" * ");    
  for (horizontal = 1; horizontal < 11; ++horizontal) {    
    printf ("%3d   ", horizontal); 
	}   
  printf ("\n");  

  for (horizontal = 1; horizontal <= 10; ++horizontal){    
      printf ("%2d ", horizontal);    
      for (vertical = 1; vertical <= 10; ++vertical)    
        printf ("%3d   ", horizontal * vertical);    
      printf ("\n");    
  }    
  return 0;    
}
