#include <iostream.h>
#include <string.h>
#include <ctype.h>

char * No_Symbols(char *, bool &);
char * StringtoLower(char *);

void main()
{
	char * input= new char [80];
	char * tokenptr[30];
	int numberofwords=0, i=1,j=0;
	char * temp[1];
	bool symbol= false;

	cout << "Enter a statement ";
	cin.getline(input, 80, '\n');
	
	input= No_Symbols(input, symbol);//gets rid of all extra symbols except ' symbol

    //----------------------Tokenize string---------------------------------
	tokenptr[0] = strtok(input, " ");  //tokenizes the string
	while(tokenptr[i-1] != NULL)       
	{                                  
		tokenptr[i]= strtok(NULL, " ");
		numberofwords++;               
		i++;                           
	}
	//----------------------End tokenize------------------------------------
	
	//-----------------Begin lower casing the string------------------------
	i=0;
	cout<< "\nThe new sentence is-> ";
	while(tokenptr[i] != NULL) //makes tokens all lower case as to not allow repeats in tokens
	{
		tokenptr[i]= StringtoLower(tokenptr[i]);
		i++;
	}
	//---------------------End lower casing the string----------------------
	i=0;
	while(tokenptr[i] != NULL)
	{
		cout<< tokenptr[i] << ' ';
		i++;
	}
	//-----------------------Put words in Alphabetical order----------------
	for(i=0; i<= numberofwords-1; i++)//alphebetizes tokens
	{
		j=i+1;
		while(j<=numberofwords-1)
		{
			if(strcmp(tokenptr[i], tokenptr[j]) > 0) //string1 > string2
			{
				temp[0]= tokenptr[i];
				tokenptr[i]= tokenptr[j];
				tokenptr[j]= temp[0];
			}
			j++;
		}
	}
	//-------------------End put words in Alphabetical order----------------
	
	//--------------------Get rid of repeats in words-----------------------
	for(i=0; i<= numberofwords-1; i++)//takes out repeats tokens
	{
		j=i+1;
		while(j<=numberofwords-1)
		{
			if(strcmp(tokenptr[i], tokenptr[j]) == 0) //string1 == string2
			{
				tokenptr[j]= "";//if to words are the same one of them is erased
				
			}
			j++;
		}
	}
	//--------------------End get rid of repeats in words--------------------
	//-----------------------Begin out put-----------------------------------
	i=0;
	numberofwords=0;
	while(tokenptr[i] != NULL)
	{
		i++;
		numberofwords++;
	}
	cout<< "\nNumber of words= " << numberofwords << '\n';
	
	if(symbol == true)
		cout<< "\nThere are special characters in the sentence\n";

	cout<< "\nIn alphabetical order: \n\t";
	i=0;
	while(tokenptr[i] != NULL)
	{
		cout<< tokenptr[i] << ' ';
		i++;
		numberofwords++;
	}
	if(tokenptr[0] == NULL)
		cout<< "\n\nThere is no string to display. String is empty.";
	//----------------------------End output----------------------------------

	while (cin.get() != '\n');//holds screen for exe

	return;
}
