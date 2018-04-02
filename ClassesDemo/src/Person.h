/*
 * Person.h
 *
 *  Created on: 09-Mar-2018
 *      Author: Utsav
 */

#include<iostream>
#ifndef PERSON_H_
#define PERSON_H_

class Person {

private:
	int age;
	std::string name;
	float weight;
	bool male;

public:
	Person();
	Person(std::string);
	virtual ~Person();
	int getAge();
	std::string getName();
	float getWeight();
	bool isMale();
	void setAge(int);
	void setName(std::string);
	void setWeight(float);
	void setMale(bool);
	void printPerson();
};

#endif /* PERSON_H_ */
