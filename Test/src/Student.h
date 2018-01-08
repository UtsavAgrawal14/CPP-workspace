/*
 * Student.h
 *
 *  Created on: 26-Jul-2017
 *      Author: Utsav
 */
#include <iostream>
#ifndef STUDENT_H_
#define STUDENT_H_

class Student{
	private: std::string name;
			 std::string rollNo;
			 int marks;
	
	public:	 Student();
			 Student(std::string name,std::string rollNo,int marks);
			 ~Student();
			 std::string getName();
			 std::string getRollno();
			 int getMarks();
			 void setName(std::string name);
			 void setRollNo(std::string rollNo);
			 void setMarks(int marks);
};




#endif /* STUDENT_H_ */
