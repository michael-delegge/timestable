//  Exercise 3-10

#include <stdio.h>

int main()
{
	int i;
	
    for (i = -4; i <= 4; ++i) {
        if ( i == 0) {
            printf("%d is even\n", i);
        } 
        else if (i < 0) {
            printf("%d is negative and ", i);
            is_even(i);
        } 
        else {
            printf("%d is positive and ", i);
            is_even(i);
            }
} 

void is_even(int x)
{
	if ( i % 2 == 0) {
    	printf("even\n");
    } else {
     	printf("odd\n");
	}
}
