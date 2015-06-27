#include <string.h>
#include <ctype.h>
#include<iostream.h>

char * No_Symbols(char * input, bool & symbol) //takes out symbols in string
{
	char string[80];
	char * newstring = new char [80];
	int i=0;

	strcpy(string, input); //converts string in to an array of chars
	strcpy(newstring, " ");

	while(string[i] != NULL)
	{
		switch(string[i]) //test to see if is a symbol
		{
		case '~' : string[i]= ' '; symbol = true; break;
		case '//' : string[i]= ' '; symbol = true; break;
		case '`' : string[i]= ' '; symbol = true; break;
		case '"' : string[i]= ' '; symbol = true; break;
		case '!' : string[i]= ' '; symbol = true; break;
		case '@' : string[i]= ' '; symbol = true; break;
		case '#' : string[i]= ' '; symbol = true; break;
		case '$' : string[i]= ' '; symbol = true; break;
		case '%' : string[i]= ' '; symbol = true; break;
		case '^' : string[i]= ' '; symbol = true; break;
		case '&' : string[i]= ' '; symbol = true; break;
		case '*' : string[i]= ' '; symbol = true; break;
		case '(' : string[i]= ' '; symbol = true; break;
		case ')' : string[i]= ' '; symbol = true; break;
		case '_' : string[i]= ' '; symbol = true; break;
		case '-' : string[i]= ' '; symbol = true; break;
		case '+' : string[i]= ' '; symbol = true; break;
		case '=' : string[i]= ' '; symbol = true; break;
		case '{' : string[i]= ' '; symbol = true; break;
		case '\\' : string[i]= ' '; symbol = true; break;
		case '[' : string[i]= ' '; symbol = true; break;
		case '}' : string[i]= ' '; symbol = true; break;
		case ']' : string[i]= ' '; symbol = true; break;
		case ':' : string[i]= ' '; symbol = true; break;
		case ';' : string[i]= ' '; symbol = true; break;
		case '<' : string[i]= ' '; symbol = true; break;
		case ',' : string[i]= ' '; symbol = true; break;
		case '>' : string[i]= ' '; symbol = true; break;
		case '.' : string[i]= ' '; symbol = true; break;
		case '?' : string[i]= ' '; symbol = true; break;
		}
		
		i++;
	}
	strcpy(newstring, string); //converts "string" back into a string	
	
	return newstring;
}