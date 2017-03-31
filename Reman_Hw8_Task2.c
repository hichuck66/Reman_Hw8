/*
 * =====================================================================================
 *
 *       Filename:  Reman_Hw8_Task2.c
 *       	Usage:  ./Reman_Hw8_Task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 04:14:36 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O*/
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Function Prototypes */
void Usage(char * argv[]);
char GetOptions(char * argv[]);
void PrintOptions(char option);

/* Main Program */
int main(int argc, char *argv[])
{
	if((argc != 2 || strcmp(argv[1], "--help") == 0))
	{
		Usage(argv);
	}
	else
	{
		char option; 
		option = GetOptions(argv);
		PrintOptions(option);
	}

	return 0;
}


/* Function Definitions */
void Usage(char * argv[])
{
	printf("Missing or wrong number of parameters!\n");
	printf("Usage: ./task2 [-p | -u | -l]\n");
}
char GetOptions(char * argv[])
{
	if(strcmp(argv[1], "-p") == 0)
	{
		return 'p';
	}
	else if(strcmp(argv[1], "-u") == 0)
	{
		return 'u';
	}
	else if(strcmp(argv[1], "-l") == 0)
	{
		return 'l';
	}
	else
	{
		return 'p';
	}
}
void PrintOptions(char option)
{
	int eof = 0;
	while(eof != 1)
	{
		char line[100];
		scanf("%s", line);
		switch(option)
		{
			case 'p':
				printf("%s\n", line);
				break;
			case 'u':
				for(int i = 0; i < strlen(line); i++)
				{
				printf("%c", toupper(line[i]));
				}
				printf("\n");
				break;
			case 'l':
				for(int i = 0; i < strlen(line); i++)
				{
				printf("%c", tolower(line[i]));
				}
				printf("\n");
				break;
		}
	}
}
