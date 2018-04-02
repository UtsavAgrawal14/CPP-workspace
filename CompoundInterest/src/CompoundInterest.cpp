//============================================================================
// Name        : CompoundInterest.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float principle, roi;
	int years;
	cout << "Enter initial amount: $";
	cin >> principle;
	cout << "Enter number of years: ";
	cin >> years;
	cout << "Enter interest rate (percent per year): ";
	cin >> roi;
	cout << "At the end of " << years << " years, you will have $"
			<< std::fixed <<principle * pow((1 + (roi / 100)), years) << ".";
	return 0;
}

