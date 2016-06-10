#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, const char * argv[])
{

	int k = atoi(argv[1]);
	char s[50];

	printf("What message would you like to encrypt?\n");
	fgets(s, sizeof(s), stdin);
	printf("You want to scramble: %s\n", s);

}

//int main(int argc, string argv[])
//{
//
//	int i;
//	char s[50];
//	printf("What message would you like to encrypt?\n");
//	fgets (s, sizeof(s), stdin);
//	printf("You want to scramble: %s\n", s);
//
//	for(i = 0, i < strlen(s), i++)
//	{
//		i
//	}
//return 0;

//}