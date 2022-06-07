/*
*Write a c progam which toggles the case of a string.
*/
#include<stdio.h>
void main()
{
              char str[100];
	int i = 0;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin); //to get string from user
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; //condition for uppercase
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32; //condition for lowercase
		}
		i++;
	}
	printf("\nToggled string is:%s", str);
	getch();
}

