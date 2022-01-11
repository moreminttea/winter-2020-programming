/* Mindy Mohr 917425752
* polygon.c
* ECS36A A04 - Hamann
* Date: March 13, 2020
* Input: data file for reading "polygon.dat"
* Output: square and triangle graphics
* Algo: read the input file for the vertex coorinates of the polygons and draw the polygons to the screen.
*/

#define _graphics_h
#include "graphics.h" //get contents of graphic library
#include <stdio.h> //get contents of standard file
#include <stdlib.h> //get contents of standard library
#include <string.h> //get contents of string library

FILE *infile;
int max = 0; //size of array
int coordinates = 0; //to store vertex coordinates
char str[100]; //array for "polygon.dat" data
char* infile_name = "polygon.dat"; //file

int main(void) //
{
    *infile = *fopen(infile_name,"r"); //infile is opened for reading
    while (infile == NULL) //while infile can't be opened, loop until it can be opened
    {
        return 1;
    }
    str[max] = *((((int*) malloc (max * sizeof(int))))); //dynamic memory allocation; accesses and adjusts size of memory by converting array to a pointer
    while (fgets(str, sizeof(str), infile)!= NULL) //points to array and only copies up to size of array using the infile
    {
        coordinates = sscanf(str, "%d", &coordinates); //points to and reads string (str) and stores integers into str and returns as an integer (coordinates)
    }
    fclose(infile); //closes infile
    
    str[max] = atoi(str); //converts str value to int
    
    //Draw Square
    MovePen(0.5, 0.5);
    DrawLine(0.5, 0.0); //draw right 0.5 units
    MovePen(1.0, 0.5);
    DrawLine(0.0, 0.5); //draw up 0.5 units
    MovePen(1.0, 1.0);
    DrawLine(-0.5, 0.0); //draw left 0.5 units
    MovePen(0.5, 1.0);
    DrawLine(0.0, -0.5); //draw down 0.5 units
    
    //Draw Triangle
    MovePen(2.0, 0.5);
    DrawLine(1.0, 0.0); //draw right 1.0 units
    MovePen(3.0, 0.5);
    DrawLine(-1.0, 0.5); //draw diagonally by moving 1.0 unit left, 0.5 units up
    MovePen(2.0, 1.0);
    DrawLine(0.0, -0.5); //draw down 0.5 units
    
    return 0;
}

