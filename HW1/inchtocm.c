/* Mindy Mohr 917425752
* inchtocm.c
* ECS36A A04
* Date: January 23, 2020
* Input: Feet and Inches (Double floating point type numbers)
* Output: Centimeters (Simplified floating point number)
* Algo: this program converts user input value of feet and inches to centimeters.
*/

#include <stdio.h> //get contents of standard file

double feet, inches, centimeters = 0; //set default values for variables

int main(void) //main function for converting inches to centimeters; main defaults argument to 0
{
    printf("This program converts from feet and inches to centimeters.\n");
    printf("Number of feet? ");
    scanf("%lf", &feet); //scans (reads) user input of feet for double type
    centimeters=feet*30.48; //conversion from feet to centimeters
    printf("Number of inches? ");
    scanf("%lf", &inches); //scans (reads) user input of inches for double type
    centimeters=centimeters + (inches*2.54); //conversion from inches to centimeters
    printf("The corresponding length is %g cm.\n", centimeters); //floating point output of centimeter conversion
}
