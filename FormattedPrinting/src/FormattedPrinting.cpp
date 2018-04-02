//============================================================================
// Name        : FormattedPrinting.cpp
// Author      : Utsav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/*cout <<setiosflags(ios::left) <<"Last Name" <<"First Name"<<"Street Address" <<"Town"<<"State"<<endl
		 <<"Jones" <<"Bernard"<<"109 Pine Lane" <<"Littletown"<<"MI"<<endl
		 <<"O'Brian" <<"Coleen"<<"42 E. 99th Ave." <<"Bigcity"<<"NY"<<endl
		 <<"Wong" <<"Harry"<<"121 .A Alabama St." <<"Lakeville"<<"IL"<<endl;*/
	cout <<setiosflags(ios::left)<<setw(25) <<"Last Name" <<"First Name"<<"Street Address" <<"Town"<<"State"<<endl
			 <<"Jones" <<"Bernard"<<"109 Pine Lane" <<"Littletown"<<"MI"<<endl
			 <<"O'Brian" <<"Coleen"<<"42 E. 99th Ave." <<"Bigcity"<<"NY"<<endl
			 <<"Wong" <<"Harry"<<"121 .A Alabama St." <<"Lakeville"<<"IL"<<endl;
	return 0;
}
