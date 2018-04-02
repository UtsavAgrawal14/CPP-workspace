//============================================================================
// Name        : PrintPattern.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	const int ROWS = 10;
	const char X = 'X', SPACE = ' ';
	for(int spaces = ROWS - 1; spaces >=0; --spaces){
	    int s;
	    for(s = 0; s < spaces; ++s){
	        cout << SPACE;
	    }
	    for(int crosses = 1; crosses + 2*s < 2 * ROWS; ++crosses){
	        cout << X;
	    }
	    cout<<endl;
	}
	for(int spaces = 1; spaces < ROWS; ++spaces){  //initialize spaces with 0 to get the mid-row repeated.
		    int s;
		    for(s = 0; s < spaces; ++s){
		        cout << SPACE;
		    }
		    for(int crosses = 1; crosses + 2*s < 2 * ROWS; ++crosses){
		        cout << X;
		    }
		    cout<<endl;
		}
}
