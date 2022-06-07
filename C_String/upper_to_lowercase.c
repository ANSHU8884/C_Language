/*
*Write a c progam to convert the string from upper case to lower case.
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
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32; //conversion in lower case
		}
		i++;
	}
	printf("\nString in lower case:%s", str);
	getch();
}


