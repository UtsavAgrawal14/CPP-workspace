//============================================================================
// Name        : Test.cpp
// Author      : Utsav Agrawal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Student.h"

int main() {
	Student s1;
	Student s2("Anup","038",78);
	std::cout << s1.getName()<<" "<<s1.getRollno()<<" "<<s1.getMarks()<<std::endl;
	std::cout << s2.getName()<<" "<<s2.getRollno()<<" "<<s2.getMarks()<<std::endl;
	return 0;
}
