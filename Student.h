//Student.h
#include <string>
#include "Faculty.h"
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student: public Faculty 
{
	public:
	//constructors
		Student();
		Student(string, string, string);
		Student(string, string, string, string);

	//mutators
		void setInfo(string, string, string);
		void setCourses(string, string, string, string);

	//accessors
		string getInfo();
		string getID();

	private:
		string first_name;
		string last_name;
		string studentID;
		string course1;
		string course2;
		string course3;
		string course4;
	//utilities

};
#endif