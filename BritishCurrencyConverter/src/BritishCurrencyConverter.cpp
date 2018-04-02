//============================================================================
// Name        : BritishCurrencyConverter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int pounds, shillings, pence;
	cout<<"Enter pounds:\n";
	cin>>pounds;
	cout<<"Enter shillings:\n";
	cin>>shillings;
	cout<<"Enter pence:\n";
	cin>>pence;
	unsigned char poundSign = 163;
	float decimalPounds = pounds + static_cast<float>(shillings*12+pence)/(12*20) ;
	cout<<"\nDecimal pounds: "<<poundSign<<std::fixed<<setprecision(2)<<decimalPounds<<endl;
	return 0;
}
