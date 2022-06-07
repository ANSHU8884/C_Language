/*
*Write a c progam accept string from user and accept range and reverse string in that range without
taking another string.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0, j = 0;
	int n1, n2;
	printf("Enter a string:");
	fgets(str, sizeof(str), stdin);
	printf("Enter range N1:");
	scanf_s("%d", &n1);
	printf("Enter range N2:");
	scanf_s("%d", &n2);
	while (i < n1)
	{
		printf("%c", str[i]);
		i++;
	}
	for (j = n2; j >= n1; j--)
	{
		printf("%c", str[j]);
	}
	i = n2 + 1;
	while (str[i] != '\n')
	{
		printf("%c", str[i]);
		i++;
	}
	getch();
}

