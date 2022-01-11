/* Mindy Mohr 917425752
 * squares.c
 * ECS36A A04
 * Date: January 23, 2020
 * Input: N/A
 * Output: Squared numbers of 1-10
 * Algo: this program squares and prints out the numbers 1-10 and their squared values
 */

#include <stdio.h> //get contents of standard file

int i, squared = 0; //set default values for variables

int main(void) //main function for iterating squared values and print statements
{
    for (i=1;i<=10;i=i+1) //for loop that starts at integer 1, ends at integer 10, and adds 1 through each iteration
    {
        squared = i*i; //squared integer calculation
        printf("%d squared is %d\n",i,squared); //displays integer and squared value
    }
}

