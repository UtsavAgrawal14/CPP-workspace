//============================================================================
// Name        : ASCIICharacters.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned short int a = 0;
	const int limit = 255;
	cout << setw(5) << "ASCII" << setw(10) << "Character" << endl;
	while (++a < limit) {
		cout<<  setfill(' ')  << setw(5) << a <<  setfill('-') << setw(10) << static_cast<unsigned char>(a) << endl;
	}
	return 0;
}
