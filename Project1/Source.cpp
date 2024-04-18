//Jake Minneman
//CIS 1202 801
//April 18, 2024

#include <iostream>

using namespace std;

char character(char, int);

//Exceptions
class InvalidCharacterException {

};
class InvalidRangeException {

};
int main(void) {
	try {
		cout << character('A', 2) << endl; //Should be C
	}
	catch (InvalidCharacterException) {
		cout << "Starting character is not a letter";
	}
}

char character(char start, int offset) {
	//If starting character is not a letter
	if (!isalpha(start)) {
		throw InvalidCharacterException();
	}
	//Add offset to char
	char result = start + offset;
	//Throw exception if result is not a letter
	if (!isalpha(result)) {
		throw InvalidRangeException();
	}
	return result;
}