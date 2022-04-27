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
	//Variables 
	const int ARRAYSIZE = 5;
	int offsetArray[ARRAYSIZE] = { 1,-1,-1,5,32 };
	char characterArray[ARRAYSIZE] = { 'a','a','Z','?','A' };

	//Driver 
	for (int i = 0; i < ARRAYSIZE; i++) {
		try {
			//Printing each test 
			cout << "\nThe character is: " << characterArray[i];
			cout << "\nThe offset is: " << offsetArray[i];
			cout << "\nTest #" << i+1 << ": " << character(characterArray[i], offsetArray[i]) << endl;
		}
		catch (const char* exception) {
			cout << "\nException: " << exception << "\n";
		}
	}
	
	//End Prompt 
	cout << "\n To end program press enter...";
	cin.ignore();
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