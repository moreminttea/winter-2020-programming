/* Mindy Mohr 917425752
 * pascal.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: N/A
 * Output: first 8 rows of Pascal's triangle
 * Algo: this program prints out the first 8 rows of Pascal's triangle using factorials and combination.
 */

#include <stdio.h> //get contents of standard file

int n, r = 1; //keep track of factorial integers
int rows = 0; //keep track of rows with set integer type
int nCr = 0; //combination integer value

//Functions--------------------------------------------------------------------------------------

int factorial(int n) //function that calculates the factorial for an integer n
{
    if (n == 0 || n == 1) //if n is 0 or 1, the denominator will be 0 (and result in an undefined value) so return 1
        return 1;
    else
        return n*(factorial(n-1));
}

int combination(int n, int r) //function that calculates the combination for integers n and r
{
    nCr = factorial(n) / (factorial(r) * (factorial(n-r))); //calls factorial function
    return nCr;
}

//Main Function----------------------------------------------------------------------------------

int main(void) //main function that prints out Pascal's triangle; main defaults argument to 0
{
    for (rows=0; rows<=7; rows=rows+1) //for loop that prints out the first 8 rows of Pascal's triangle
    {
        for (r = 0; r <= rows; r = r + 1) //for loop that prints out Pascal values using the combination function starting from the first value in each row
        {
            combination(rows, r); //calls combination function for integer rows and r
            
            if (n == rows) //first row (single 1)
            {
                printf("%14s",""); //space alignment for first row
            }
            if (n != rows && r != rows) //all the values in the inner triangle
            {
                printf("%4d", nCr);
            }
            if (r == rows) //space alignment for when it's the last value of each row and starting the next row
            {
                if (rows == 0) printf("%4d\n %11s", nCr, "");
                if (rows == 1) printf("%4d\n %9s", nCr, "");
                if (rows == 2) printf("%4d\n %7s", nCr, "");
                if (rows == 3) printf("%4d\n %5s", nCr, "");
                if (rows == 4) printf("%4d\n %3s", nCr, "");
                if (rows == 5) printf("%4d\n %1s", nCr, "");
                if (rows == 6) printf("%4d\n", nCr);
                if (rows == 7) printf("%4d\n", nCr);
            }
        }
    }
}
