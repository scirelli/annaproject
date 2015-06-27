#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char * StringtoLower(char * string)
{
	char temp[80];
	int i=0;

	strcpy(temp, string); //turns string into an array of chars because the func tolower only does single chars

	while(temp[i] != NULL) //makes string lower case
	{
		temp[i]= tolower(temp[i]);
		i++;
	}
	
	strcpy(string, temp); //turns temp into a string
	
	return string;
}