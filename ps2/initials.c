#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(int argc, const char * argv[])
{

	
	int i;
	char name[10]; //array, every cell contains a character
	printf("What is your name?\n");
	fgets(name, sizeof(name), stdin);
	printf("Your name is %s\n", name);

	for (i = 0; i < strlen(name); i++)
	{
		printf("%c\n", name[i]);
	}


	return 0;

}
