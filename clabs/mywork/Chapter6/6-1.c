//
//   Exercise 6-1
//
#include <stdio.h>

#define ALPHA 1

int alphacheck(char s[])
{
     int i;
     
     for (i = 0; s[i] != '\0'; i++) {
          if (s[i] >='A' && s[i] <= 'Z') {
               continue;
          }
          if (s[i] >= 'a' && s[i] <= 'z') {
               continue;
          }
          
          return(0);
     }
               
     return(ALPHA);
}

int main()
{
    int result;

    result = alphacheck("Xsh78TLK");
    
    if (result == ALPHA) {
        printf("All alpha characters\n");
    } else {
        printf("One or more characters is NOT alpha\n");
    }
}
