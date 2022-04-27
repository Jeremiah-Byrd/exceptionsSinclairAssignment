// Jeremiah Byrd 
// CIS 1202 101
// April 26, 2022

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<ctype.h>

using namespace std;

//Prototypes 
char character(char start, int offset);

int main() {
	//Driver 
	try{
	//cout << "\n Test #1(Should return b): " << character('a', 1);
	//cout << "\n Test #2(Should return invalid range exception): " << character('a', -1);
	//cout << "\n Test #3(Should return Y): " << character('Z', -1);
	//cout << "\n Test #4(should return invalid character exception): " << character('?', 5);
	//cout << "\n Test #5(Should return a transition exception): " << character('A', 32);

	
	}
	catch (const char* exception) {
		cout << "\nException: " << exception;
	}
	
	cin.ignore(1, '\n');
	cin.get();
}

/**************************************
to calculate character offsets,
throwing exceptions in error conditions.
**************************************/
char character(char start, int offset) {

		//Checking if the character is not a letter
		if (!(isalpha(start))) {
        
			//Throwing an invalid char exception
			throw "invalidCharacterException";
		}
		else if (!(isalpha(start + offset))) {
			//Throw an invalid range exception
			throw "invalidRangeException";
		}
		
		//Checking that no transition lowercase letters happened 
		if (islower(start)) {
			if (char(start+offset) == toupper(start+offset)) {
				throw "invalidConversionException";
			}
		}//Checking that no transitions of capital letters happened
		else if (isupper(start)) {
			if (char(start + offset) == tolower(start + offset)) {
				throw "invalidConversionException";
			}
		}

		//Returning proper conversion 
		return char(start + offset);
}