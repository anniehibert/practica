#include <stdio.h>



int main(void)
{
	int mins, water;
	printf("How much do you spend in the shower (in minutes)?\n");
	scanf ("%d", &mins);

	water = ((mins * 192) / 16);

	printf("You take %d minutes to shower, that's equivalent to %d bottles of water!", mins, water);
}