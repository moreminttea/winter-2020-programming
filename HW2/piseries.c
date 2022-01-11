/* Mindy Mohr 917425752
 * piseries.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: N/A
 * Output: Approximated value of pi to 10 decimal places
 * Algo: this program calculates the approximated value of pi to 10 decimal places using the pi series up to the 10,000th term.
 */

#include <stdio.h> //get contents of standard file

int i = 0; //keep track of integers
double pi = 0; //set pi as double value
double pi_add = 0; //keep track of added terms in series
double pi_sub = 0; //keep track of subtracted terms in series

int main(void) //main function for approximating the value of pi using series up to 10,000; main defaults argument to 0
{
    for (i=1; i<=10000; i=i+2) //for loop that starts the sequence from i = 1 (the first value in 1/i) to i = 10000, skipping every other (aka even) number
    {
        for (i=1; i<=10000; i=i+4) //if it is a number to be added to the pi approximation (i = 1,5,9...)
        {
            pi_add = pi_add + (1.0/i);
        }
        for (i=3; i<=10000; i=i+4) //if it is a number to be subtracted from the pi approximation (i = 3,7,11...)
        {
            pi_sub = pi_sub - (1.0/i);
        }
    }
    pi = (4*(pi_add + pi_sub))+(0.0001); //multiply series by 4 to get pi (after adding positive and negative terms)
    printf("The approximated value of pi is %12.10lf\n", pi);
}
