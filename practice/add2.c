#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the first value:");
	scanf("%d", &a); //allows you to accept input, el & antes del nombre de la variable es obligatorio
	printf("Enter the second value:");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}