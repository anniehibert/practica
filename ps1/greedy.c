#include <stdio.h>
#include <math.h>

int main(void)
{
	float changef, test1;
	int cents, change, coins, quarters, dimes, nickles, pennies, test2, qcount, dcount, ncount, pcount;

	coins = 0;
	qcount = 0;
	dcount = 0;
	ncount = 0;
	pcount = 0;

	do
	{
		printf ("How much change do you want?");
		scanf ("%f", &changef);
	}
	while (changef <= 0);

	(int)changef;
	change = (changef *100);
		
	printf ("You want %d cents\n", change); 	

	for (quarters = 25; change >= quarters; coins++)
	{
		change = change - quarters;
		qcount = qcount + 1;
	}
	
	for (dimes = 10; change >= dimes; coins++)
	{
		change = change - dimes;
		dcount = dcount + 1;
	}

	for (nickles = 5; change >= nickles; coins++)
	{
		change = change - nickles;
		ncount = ncount + 1;
	}


	for (pennies = 1; change >= pennies; coins++)
	{
		change = change - pennies;
		pcount = pcount + 1;
	}

	printf ("%d coins\n", coins);
	printf ("change is %d\n", change);
	printf ("%d quarters and %d dimes and %d nickles and %d pennies\n", qcount, dcount, ncount, pcount);

}
