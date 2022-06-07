/*
*write a c program which accept string from user and then reverse the string till first N character
without taking another string
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	int n;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	printf("Enter number:");
	scanf("%d", &n);
	for (i = n - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	for (i = n; str[i] != '\n'; i++)
	{
		printf("%c", str[i]);
	}
	getch();
}
