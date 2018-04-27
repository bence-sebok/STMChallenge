/*
 * main.c
 *
 *  Created on: Apr 27, 2018
 *      Author: sebokbence
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * agrv[])
{
	char ch;
	int counter = 0;
	FILE * file_output = fopen("output.txt", "wt");
	FILE * file_input = fopen("input.txt", "rt");
	if (file_input == NULL)
	{
	  perror("Error while opening the file.\n");
	  exit(EXIT_FAILURE);
	}
	while((ch = fgetc(file_input)) != EOF)
	{
	   counter++;
	   if(counter < 1000)
	   {
		   fprintf(file_output, "%u\n", ch);
	   }
	}
	printf("counter: %d\n", counter);
	fclose(file_input);
	return 0;
}
