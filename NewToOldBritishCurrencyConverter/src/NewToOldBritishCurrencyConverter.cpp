//============================================================================
// Name        : NewToOldBritishCurrencyConverter.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float decimalPounds;
	cout << "Enter decimal pounds:" << endl;
	cin >> decimalPounds;
	int pounds = static_cast<int>(decimalPounds);
	unsigned char poundSign = 163;
	float decFrac = decimalPounds - pounds;
	int shillings = static_cast<int>(decFrac * 20);
	float penceFrac = decFrac - shillings/20;
	int pence = static_cast<int>(penceFrac * 12);
	cout << poundSign << pounds << "." << shillings << "." << pence << endl;
	return 0;
}
