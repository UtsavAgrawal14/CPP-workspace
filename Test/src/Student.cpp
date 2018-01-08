/*
 * Student.cpp
 *
 *  Created on: 26-Jul-2017
 *      Author: Utsav
 */

#include "Student.h"
#include <iostream>

Student::Student() {
	this->name = "Utsav";
	this->rollNo = "180";
	this->marks = 74;
}

Student::Student(std::string name, std::string rollNo, int marks) {
	this->name = name;
	this->rollNo = rollNo;
	this->marks = marks;
}

std::string Student::getName() {
	return this->name;
}

std::string Student::getRollno() {
	return this->rollNo;
}

int Student::getMarks() {
	return this->marks;
}

void Student::setName(std::string name){
	this->name=name;
}

void Student::setRollNo(std::string){
	this->rollNo=rollNo;
}

void Student::setMarks(int marks){
	this->marks=marks;
}

Student::~Student(){
	std::cout<<"BoooooM! Object destroyed"<<std::endl;
}
