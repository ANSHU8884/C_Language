/*
*write c program to print multiplication table of any number
*/

//solution
#include<stdio.h>
int main()
{
	int i;        //variable definition
	int n;
	int mtable;   
	printf("enter number to print table:");       // read user value
	scanf_s("%d\n", &n);
	i = 1;         //initialization
	while(i<=10)   //condition to initialize variable   
	{   
		mtable = n * i;                    //multiplication  table condition
		i++;                              //increment i
		printf("%d\n", mtable);
	}                                                            //end for
	return 0;               


}                                                               //end main    


