//============================================================================
// Name        : Manipulators.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int pop1 = 600000000, pop2 = 20000000, pop3 = 100000;
	cout << "State\tPopulation"<<endl
	<<"UP\t"<<pop1<<endl
	<<"Delhi\t"<<pop2<<endl
	<<"Arunanchal Pradesh"<<pop3<<endl;
	cout<<endl<<"Behold setw()"<<endl<<endl;
	cout<<setw(18)<< "State"<<setw(12)<<"Population"<<endl
	<<setw(18)<<"UP"<<setw(12)<<pop1<<endl
	<<setw(18)<<"Delhi"<<setw(12)<<pop2<<endl
	<<setw(18)<<"Arunanchal Pradesh"<<setw(12)<<pop3<<endl;

	return 0;
}
