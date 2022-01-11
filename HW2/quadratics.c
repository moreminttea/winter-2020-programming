/* Mindy Mohr 917425752
 * quadratics.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: A, B, and C values for quadratic formula
 * Output: Quadratic formula solution for user inputted values of A, B, and C
 * Algo: this program takes the user's input values for A, B, and C, and calculates the solution using the quadratic formula.
 */

#include <stdio.h> //get contents of standard file
#include <math.h> //get contents of math library

double a, b, c = 0; //set default value for coefficients as double type
double discriminant = 0; //equation under sqrt set as double type
double first_solution = 0; //+ solution from +- in quadratic formula set as double type
double second_solution = 0; //- solution from +- in quadratic formula set as double type

int main(void) //main function for printing out solution to quadratic formula; main defaults argument to 0
{
    printf("Enter coefficients for the quadratic equation:\n");
    
    printf("a: ");
    scanf("%lf", &a); //scans (reads) user input for "a" value
    
    printf("b: ");
    scanf("%lf", &b); //scans (reads) user input for "b" value
    
    printf("c: ");
    scanf("%lf", &c); //scans (reads) user input for "c" value
    
    discriminant = b * b - (4 * a * c); //equation under sqrt in quadratic formula
    
    if (discriminant > 0) //if discriminant is positive (does not include zero, or there would only be one solution); print real solutions
    {
        first_solution = (-b + sqrt(discriminant))/(2*a); //+ solution from the +- in the quadratic formula
        second_solution = (-b - sqrt(discriminant))/(2*a); //- solution from the +- in the quadratic formula
        printf("The first solution is %g\n", first_solution);
        printf("The second solution is %g\n", second_solution);
    }
    
    if (discriminant <0) //if discriminant is negative; no real solutions exist
    {
        printf("The equation has no real solutions.\n");
    }
    
    if (discriminant == 0) //if discriminant is equal to 0 (it doesn't matter if the discriminant is added or subtracted since it's 0), there is only 1 solution
    {
        first_solution = (-b)/(2*a); //solution from the quadratic formula
        printf("The only solution is %g\n", first_solution);
    }
}
