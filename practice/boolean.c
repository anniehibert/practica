#include <stdio.h>

int main()
{
	int b;
	printf("Enter a value:");
	scanf("%d", &b);
	if (b < 0)
		printf("The value is negative\n");
	else if (b > 0)
		printf("The value is positive\n");
	else
		printf("You wrote zero\n");
			return 0;
}