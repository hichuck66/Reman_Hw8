/*
 * =====================================================================================
 *
 *       Filename:  Reman_Hw8_Task1.c
 *       	Usage:  ./Reman_Hw8_Task1.c
 *    Description:  task1
 *
 *        Version:  1.0
 *        Created:  03/23/2017 04:14:16 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O*/
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */

void Usage (char *argv[]);
char StringIn (char *Str1[], char *Str2[]);

/* Main Program */
int main(int argc, char *argv[])
{ 
	if (argc != 3 || strcmp(argv[2],"--help")) //check for 2 and only 2 parameters
	{
		Usage(argv);
		exit(0);
	}
	StringIn(Address);

	return 0;
}

/* Function Definitions */

void Usage (char *argv[])
{
	printf("help info or missing required parameters\n");
	printf("Usage: ./task1 <str1> <str2>\n");
	printf("Program checks if str2 is part of str1\n");

	return;
}
char StringIn (char Str1[], char Str2[]);
{
	c = strncmp

}





