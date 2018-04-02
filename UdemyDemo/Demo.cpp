/*
 * Demo.cpp
 *
 *  Created on: 20-Mar-2018
 *      Author: Utsav
 */

#include<iostream>
#include<sstream>

int main(){
	std::string name = "Bob";
	int age = 12;
	std::stringstream info;
	info << "Name is: "<< name << "; Age is: "<< age;
	std::cout<<info.str()<<std::endl;
	return 0;
}

