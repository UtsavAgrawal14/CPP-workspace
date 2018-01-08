#include <iostream>
#include<cmath>
using namespace std;

bool areCoprimes(long a, long b) {
	if (abs(a - b) == 1)
		return true;
	else {
		long small = (a >= b) ? b : a;
		long large = a + b - small;
		long temp;
		while (small != 0) {
			temp = large % small;
			large = small;
			small = temp;
		}
		if (large == 1)
			return true;
		return false;
	}
}

int main() {
	long a, b;
	int cmnfctrs = 0;
	cin >> a >> b;
	long divsr = 2;
	while (a >= (2 * divsr) && b >= (2 * divsr) && abs(a - b) >= divsr) {
		if (areCoprimes(a, b)) {
			cout << pow(2, cmnfctrs);
			exit(0);
		}
		if (a % divsr == 0 && b % divsr == 0) {
			a /= divsr;
			b /= divsr;
			++cmnfctrs;
		} else {
			++divsr;
		}
	}
	cout << pow(2, cmnfctrs);
	return 0;
}
