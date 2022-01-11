/* Mindy Mohr 917425752
 * interest.c
 * ECS36A A04
 * Date: January 23, 2020
 * Input: Account balance and annual % interest rate
 * Output: New balance after a year
 * Algo: this program reads user inputs of account balance and annual interest rate (expressed as a %) and displays the new balance after a year
 */

#include <stdio.h> //get contents of standard file

double balance, annual_ir, new_balance = 0; //set default values for variables

int main(void) //main function for converting inches to centimeters; main defaults argument to 0
{
    printf("Interest calculation program.\n");
    printf("Starting balance? ");
    scanf("%lf", &balance); //scans (reads) user input of balance for double type
    printf("Annual interest rate percentage? ");
    scanf("%lf", &annual_ir); //scans (reads) user input of annual interest rate for double type
    new_balance=balance+(balance*(annual_ir/100)); //new balance after a year calculation
    printf("Balance after one year: %g\n", new_balance); //displays balance after one year
}

