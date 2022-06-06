/*
*write c program to print sum of even  natural numbers from 1 to 100
*/

//solution
#include<stdio.h>
void main()
{
    int i;          //variable definition
    int sum = 0;         //variable initialization

    printf("sum of even natural numbers from 1 to 100:");   //print statement 

    i = 1;    //initialization
    while (i <= 100)  //while loop we initialize variable
    {
        if (i % 2 == 0)     //condition to check no is even
        {
            sum = sum + i;    //addition

        }                            //end if
        i++;                        //increment i
    }                              //end while
    printf("%d", sum); 
}                                //end main

