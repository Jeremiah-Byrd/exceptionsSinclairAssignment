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
	cout << "\n Test #1(Should return b): " << character('a', 1);
	cout << "\n Test #2(Should return invalid range exception): " << character('a', -1);
	cout << "\n Test #3(Should return Y): " << character('Z', 1);
	cout << "\n Test #4(should return invalid character exception): " << character('?', 5);
	cout << "\n Test #5(Should return a transition exception): " << character('A', 32);
	
}

/**************************************
to calculate character offsets,
throwing exceptions in error conditions.
**************************************/
char character(char start, int offset) {

	//If the variables are capitals
	if (isalpha(start) || isalpha(char(start + offset))) {
		//ERROR
	}
	else if (start >= 65 && start <= 90) {

	}
	else if (start < 65) {
		//ERROR
	}else if(start <= 97)
	return 'a';

	//65-90 or 97-122
}