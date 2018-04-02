/*
 * Strings.cpp
 *
 *  Created on: 08-Mar-2018
 *      Author: Utsav
 */
#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;

int main() {

	string name = "utsav";
	cout << "Enter your name:" << flush;
	string input;
	cin >> input;
	if(input == name){
		cout<<"good name"<<endl;
	}else{
		cout<<"meh!"<<endl;
	}
	cout<<INT_FAST64_MAX<<endl;
	/*cout << INT32_MAX << endl;
	float fnm = 123456789.7;
	double dnm = 12345678987654321.7;
	long double ldm = 12345678987654321.7;
	cout << setprecision(20) << "float: " << sizeof(float) << endl;
	cout << setprecision(20) << "double: " << sizeof(double) << endl;
	cout << setprecision(20) << "long double: " << sizeof(long double) << endl;*/
	return 0;
}

