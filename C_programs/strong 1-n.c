/* write a c program to print all strong number between 1 to n
   */
#include<stdio.h>
void main()
{
	int i = 1, j, ans, sum, n, a;
	int number;
	printf("\n Find strong number between 1 to \n");
	printf("\n All strong number between 1 to %d are:\n", number);
	for (j = 1; j <= number; j++)
	{
		sum = 0;
		while (j != 0)
		{
			a = j % 10;
			j = j / 10;
			ans = 1;
			while (i <= a)
			{
				ans = ans * a;
				a--;
			}
			sum = sum + ans;
		}
		if (j == sum)
			printf("\n%d\n", j);
	}
