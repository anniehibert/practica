#include <stdio.h>

int main()
{
	int a, b, c; //declara las variables como integers
	a = 5;
	b = 7;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c); //el % marca placeholders, y al final se declaran las variables del placeholder en orden
	return 0;
}