//============================================================================
// Name        : ClassesDemo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Person.h"
using namespace std;

int main() {

	Person alice("Alice");
	Person bob("Bob");
	bob.setAge(21);
	bob.setMale(true);
	bob.setWeight(61);
	alice.printPerson();
	bob.printPerson();
	return 0;
}
