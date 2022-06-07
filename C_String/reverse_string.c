/*
*Write a c progam to accept string from and print it in reverse order.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	int count = 0;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	while (str[count] != '\n')
	{
		count++;
	}
	for (i = count; i >= 0; i--) //condition for reverse
	{
		printf("%c", str[i]); //to print string
	}
	getch();
}
