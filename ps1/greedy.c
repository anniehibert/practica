#include <stdio.h>
#include <math.h>

int main(void)
{
	float changef, test1;
	int cents, change, coins, quarters, dimes, nickles, pennies, test2;

	quarters = 25;
	dimes = 10;
	nickles = 5;
	pennies = 1;

	test1 = (0.25 * 100.00);
	printf ("%f\n", test1);
	int test2 = int (test1);
	printf ("%i\n", test2);

	do
	{
		printf ("How much change do you want?");
		scanf ("%f", &changef);
	}
	while (changef <= 0);

	change = changef * 100.00;
	(int) change;

	printf ("You want $%d\n", cents); 

	while(cents > quarters)
	{
		cents - quarters;
		coins +1;
	}

	printf ("%d\n", coins);


	// for (change = coins; coins == 0; coins--)
	// {
	// 	int quarters, dimes, nickles, pennies;
	// 	for (quarters = 25; coins < quarters; quarters--)
	// 	{
	// 		printf ("you need %d quarters\n", quarters);
	// 	}
	// }
}