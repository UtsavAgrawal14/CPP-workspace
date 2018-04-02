/*
 * Person.cpp
 *
 *  Created on: 09-Mar-2018
 *      Author: Utsav
 */
#include<iostream>
#include "Person.h"

Person::Person() {
	this->age = 0;
	this->name = "Noname";
	this->male = false;
	this->weight = 0.3;
	std::cout << "Person is born.. :)\n";
}

Person::Person(std::string name) {
	this->age = 0;
	this->name = name;
	this->male = false;
	this->weight = 0.3;
	std::cout << this->name << " is born.. :)\n";
}

Person::~Person() {
	std::cout << this->name << " ded.. :( \n";
}

int Person::getAge() {
	return this->age;
}

std::string Person::getName() {
	return this->name;
}

float Person::getWeight() {
	return this->weight;
}

bool Person::isMale() {
	return this->male;
}

void Person::setName(std::string name) {
	this->name = name;
}

void Person::setMale(bool male) {
	this->male = male;
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::setWeight(float weight) {
	this->weight = weight;
}

void Person::printPerson() {
	std::cout << "Person details: \n\nName: " << this->getName() << "\nAge: "
			<< this->age << "\nGender: "
			<< ((this->isMale()) ? "Male" : "Female") << "\nWeight: "
			<< this->weight << std::endl;
	std::cout << std::endl;
}
