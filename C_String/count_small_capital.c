/*
*Write a c progam to accept string from user and print number of small,capital letters spaces and
digits from string
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	int S = 0;
	int C = 0;
	int N = 0, W = 0;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') //condition for small letters
		{
			S++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z') //condition for capital letters
		{
			C++;
		}
		if (str[i] >= '0' && str[i] <= '9') //condition for digits
		{
			N++;
		}
		if (str[i] == ' ') //condition for spaces
		{
				W++;
		}
	}
	printf("small:%d", S);
	printf("\ncapital:%d", C);
	printf("\nNum:%d", N);
	printf("\nSpace:%d", W);
	getch();
}


