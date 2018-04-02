//============================================================================
// Name        : CurrencyConverter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	const float BPUSD = 1.487, FFUSD = 0.172, GDUSD = 0.584, JYUSD = 0.00955;
    cout<<"Enter income in USD:"<<endl;
    float income;
    cin>>income;
    cout<<endl<<"Your income\n"<<endl;
    cout<<setw(40)<<"Currency"<<setw(20)<<setfill('-')<<"Value"<<endl;
    cout<<setfill(' ')<<setw(40)<<"US Dollars"<<setfill('-')<<setw(20)<<income<<endl;
    cout<<setfill(' ')<<setw(40)<<"British pound"<<setfill('-')<<setw(20)<<income/BPUSD<<endl;
    cout<<setfill(' ')<<setw(40)<<"French franc"<<setfill('-')<<setw(20)<<income/FFUSD<<endl;
    cout<<setfill(' ')<<setw(40)<<"German deutschemark"<<setfill('-')<<setw(20)<<income/GDUSD<<endl;
    cout<<setfill(' ')<<setw(40)<<"Japanese yen"<<setfill('-')<<setw(20)<<income/JYUSD<<endl;
	return 0;
}
