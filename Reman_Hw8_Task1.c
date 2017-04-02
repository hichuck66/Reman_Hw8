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
char* StringIn (const char Str1[], const char Str2[]);

/* Main Program */
int main(int argc, char *argv[])
{ 
	if (argc != 3 || strcmp(argv[2],"--help")) //check for 2 and only 2 parameters
	{
		Usage(argv);
		exit(0);
	}
	StringIn (argv[1], argv[2]);

	return 0;
}

/* Function Definitions */

void Usage (char *argv[])
{
	printf("\n help info\n or missing required parameters\n");
	printf("Usage: ./task1 <str1> <str2>\n");
	printf("Program checks if str2 is part of str1\n\n");

	return;
}
char* StringIn (const char Str1[], const char Str2[])
{

	//get string lengths
	int L1 = strlen (Str1);
	int L2 = strlen (Str2);

	//comparre the two strings up to the number of character of L2)
	char response;
	response  = strncmp (Str1, Str2, L2);

	//loop over str1
	for (int i = 0; i < Str1[i]; i++)
	{
		if (Str2[i] != Str1[i])
		{
			return NULL;
		}
		if (response == L1)
		{
			printf("%d characters of [%s] are in [%s]\n", L2, Str2, Str1);
		}
	}
	return (char*)Str1;
}







