/* Mindy Mohr 917425752
 * powers.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: N/A
 * Output: values of 10^k for all values of k from -4 to 4
 * Algo: this program prints out the values of 10^k for k values from -4 to 4.
 */

#include <stdio.h> //get contents of standard file
#include <math.h> //get contents of math library

int k = 0; //keep track of integers set to integer type
int formula_exp = 0; //formula for exponential power set to integer type
double result = 0; //value of 10^k after calling RaiseRealToPower function

int RaiseRealToPower(int k) //function that calculates base 10 raised to the k power
{
    if (k>=-4 && k<0)
    {
        formula_exp = pow (10, -k); //negative exponent formula; converted to positive
    }
    else
    {
        formula_exp = pow (10, k); //positive exponent formula
    }
    return formula_exp;
}

int main(void) //main function for printing out Fibonacci's sequence from 0 to 15; main defaults argument to 0
{
    //formatted print statements
    printf("           k\n");
    printf(" k       10\n");
    printf("--------------\n");
    
    for (k=-4; k<=4; k=k+1) //for loop that starts the sequence from k=-4 to k=4 to print its corresponding power values of base 10
    {
        result = RaiseRealToPower(k); //calls RaiseRealToPower function for k
        if (k>=-4 && k<0)
        {
            printf("%2d      %g\n", k, 1/(result)); //formatted to line up and get rid of trailing zeroes; takes the reciprocal to get negative exponent result
        }
        if (k>=0 && k<=4)
        {
            printf("%2d  %7.1f\n", k, result); //formatted to line up and adjust values to 1 decimal place
        }
    }
}
