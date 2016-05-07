#include <stdio.h>

int main(void)
{
	int i, height;

	
	do
	{
		printf ("How tall will the pyramid be (choose a number between 0 and 23)?\n");
		scanf("%d", &height);
	}
	while (height < 0 || height > 23);
	

	printf ("Height is %d\n", height);

	for (int i = 0; i < height; i++)
	{
		int space, hash;
		for (space = height; space > i; space--)
		{
			printf(" ");
		}
		for (hash = 0; hash < i; hash++)
		{
			printf("#");
		}
		printf("\n");
	}
}