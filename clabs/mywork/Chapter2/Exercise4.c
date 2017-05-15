#include <stdio.h>

int sum_of_squares(int a, int b)
{
	int sos;
	sos = a * a + b * b;
	return(sos);
}

int main()
{
	int a = 5, b = 6, c;
	
	c = sum_of_squares(a, b);
	
	printf("%d and %d is %d\n", a, b, c);
}
