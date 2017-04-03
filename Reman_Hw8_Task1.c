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
char* StringIn (char *str1, char *str2);

/* Main Program */
int main(int argc, char *argv[])
{
	//check for 2 and only 2 parameters
	if (argc != 3 || argc < 1)
	{
		Usage(argv);
		exit(0);
	}
//	else if (strcmp(argv[1], "--help"))
//	{
//		Usage(argv);
//		exit(0);
//	}

	char *str1 = argv[1];
	char *str2 = argv[2];

	strcpy(str1, argv[1]);
	strcpy(str2, argv[2]);

//call the function
	StringIn (str1, str2);

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

char* StringIn (char *str1, char *str2)
{

	//L2 is the number of characters we a comparing
	int L2 = strlen(str2);

	char res;
	res = strncmp (str1, str2, L2);

	//loop over string1
	int i = 0;
	for (i = str1[i]; i != EOF && i != '\0'; i++)
	{
		if (res == 0)
		{
			printf("\n The %d characters [%s] are found in [%s]\n\n",L2, str2, str1);
			break;
		}

		else if (str2[i] != str1[i])
		{
			printf("\n The %d characters [%s] not found in [%s]\n", L2, str2, str1);
			printf("returned string is <NULL>\n\n");
			return NULL;
		}

		else
		{
			break;
		}
	}
	return (char*)str1;
}


