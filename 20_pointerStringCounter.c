//Date: 2023.09.19
//Purpose: Calculate the length of a string using pointer
//Equivalent of strlen()

#include <stdio.h>

//function prototype declaration

int stringlength(const char *pString);

int main() {

	char myString[100];
	int length = 0;
	const char* pString = myString; // or &mystring[0]
	printf("Type in the string you want to be counted:");
	fgets(myString, 100, stdin);
	printf("The string to be counted for length: %s\n", myString);
	
	length = stringlength(pString);
	printf("The length is: %d", length);
	return 0;
}

//function definitions

int stringlength(const char* pString) {
	int result = 0;
	char* ptr = pString;

	while (*ptr != 0) { // or while(*pString) NULL terminator \0 is = with int 0;
		ptr++;
	}

	result = ptr - pString;
	return result;
}