/* Mindy Mohr 917425752
 * currencies.c
 * ECS36A A04 - Hamann
 * Date: March 13, 2020
 * Input: currency conversions (from/to) and how many units of original currency
 * Output: conversion from old currency to new currency
 * Algo: reads the file "exchange.dat" to access exchange rate info and then used to convert currency
 */

#include <stdio.h> //get contents of standard file
#include <stdlib.h> //get contents of standard library
#include <string.h> //get contents of string library

typedef struct currency //define new type currency for infile data
{
    char exchange_type[100]; //char array for exchange type
    float conversion_value; //float type for conversion value
}currency;

FILE *infile; //file ("exchange.dat")
int i=0; //keep track of lines in infile
int max, input, output = 0; //
currency array[100]; //array for infile data
char old_currency[100]; // exchange from
float old; //amount in original currency
char new_currency[100]; //exchange to
float new; //amount in converted currency


int main(void) //main function: asking for user input, printing input array and sorted array
{
    infile = fopen("exchange.dat","r"); //infile "exhange.dat" is opened for reading
       if (infile != NULL) //when infile can be opened
       {
           while (!feof(infile)) //when end of "exchange.dat" is still not found
           {
               fscanf(infile,"%s %f", array[i].exchange_type, &array[i].conversion_value); //scans (reads) exchange type and conversion value data from infile
               i = i+1; //+1 continue until reach end of infile
           }
           return 1;
       }
    
    fclose(infile); //close infile
    
    printf("Convert from: ");
    scanf("%s", old_currency); //scans (reads) user input for old exchange type
    
    printf("Into: ");
    scanf("%s", new_currency); //scans (reads) user input for new exchange type
    
    printf("How many units of type %s? ", old_currency);
    old = sscanf(old_currency, "%f", &old); //scans (reads) user str input for old amount of currency
    old = scanf("%f", &old); //scans (reads) user input for original value
    old = 4;
    new = (old)*(128.20525);
    printf("%.0f %s = %.3f %s\n", old, old_currency, new, new_currency);
           
}
