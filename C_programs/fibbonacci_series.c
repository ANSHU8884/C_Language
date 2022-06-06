/*
*c program to print fibbonacci series up to n terms
*/
//solution
#include<stdio.h>
void main()
{
	int n;    //variable definition
	int n1 = 0, n2 = 1, n3 = 0;    //initialization
	printf("enter limit:");  //read user value
	scanf_s("%d", &n);
	printf("value of n1 and n2 is =\n%d\n%d\n", n1, n2);

	for (int i = 0; i <= n; i++)  //condition
	{
		n3 = n1 + n2;        //addition

		printf("%d\n", n3);
		n1 = n2;   
		n2 = n3;
	}
}
