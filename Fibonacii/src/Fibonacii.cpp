//============================================================================
// Name        : Fibonacii.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
	cout << "Enter number of terms:" << endl;
	int terms;
	cin >> terms;
	unsigned long long number1 = 0, number2 = 1, sum = 0;
	cout << setiosflags(ios::left) << setw(5) << "#" << setw(30) << "Term"
			<< setw(30) << "Golden Ratio" << endl;
	for (int i = 0; i < terms && sum < LONG_LONG_MAX; ++i) {
		if (i == 0 || i == 1) {
			cout << setw(5) << i + 1 << setw(30) << i << setw(30) << "N/A"
					<< endl;
			continue;
		} else {
			sum = number1 + number2;
			cout << setw(5) << i + 1 << setw(30) << sum << setw(30)
					<< std::fixed << setprecision(25)
					<< static_cast<double>(number2) / sum << endl;
		}
		number1 = number2;
		number2 = sum;
	}
	if(sum > LONG_LONG_MAX){
		cout<<"Terminated early because of overflow.."<<endl;
	}
	return 0;
}
