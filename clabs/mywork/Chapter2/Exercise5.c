#include <stdio.h>

int is_right(int a, int b, int c)
{
	int sos;
	sos = a * a + b * b == c * c;
	return(sos);
}

int main()
{
	int side1 = 3, side2 = 4, hypotenuse = 5;

	printf("%d, %d, and %d are ", side1, side2, hypotenuse);

	if (is_right(side1, side2, hypotenuse) == 0) {
		printf("NOT ");
	}

	printf("the sides of a right triangle.\n");
}
