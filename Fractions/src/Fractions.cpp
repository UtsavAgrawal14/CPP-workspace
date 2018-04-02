//============================================================================
// Name        : Fractions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

    cout<<"Enter first fraction:"<<endl;
    int n1,n2,d1,d2;
    cin>>n1;
    cout<<"--"<<endl;
    cin>>d1;
    cout<<endl<<"Enter second fraction:"<<endl;
    cin>>n2;
    cout<<"--"<<endl;
    cin>>d2;
    if(d1!=0 && d2 != 0){
        cout<<"\nProduct is:\n"<<n1*d2+d1*n2<<endl<<"--"<<endl<<d1*d2<<endl;
    }else{
        cout<<"The denominators can't be 0.";
    }
	return 0;
}
