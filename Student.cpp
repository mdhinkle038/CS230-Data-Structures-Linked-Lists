//Student.cpp
#include "Student.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

//constructors
Student::Student() 
{
	setInfo("", "", "");
}

Student::Student(string first, string last, string id)
{
	string c1 = "", c2 = "", c3 = "", c4 = "";
	setInfo(first, last, id);
	cout << "Enter your four Classes: \n";
	if (id != "")
	{
		cout << "Class 1: ";
		cin >> c1;
		cout << "Class 2: ";
		cin >> c2;
		cout << "Class 3: ";
		cin >> c3;
		cout << "Class 4: ";
		cin >> c4;
	}
	setCourses(c1, c2, c3, c4);
}

Student::Student(string course1, string course2, string course3, string course4)
{
	setCourses(course1, course2, course3, course4);
}

//mutators
void Student::setInfo(string first, string last, string id) 
{
	first_name = first;
	last_name = last;
	studentID = id;
}

void Student::setCourses(string c1, string c2, string c3, string c4)
{
	course1 = c1;
	course2 = c2;
	course3 = c3;
	course4 = c4;
}

//accessors
string Student::getID() 
{
	return studentID;
}

string Student::getInfo()
{
	return "Student Name: " + first_name + " " + last_name + "\n"
		+ "Student ID: " + studentID + "\n"
		+"\nStudent's Courses: " + course1 + ", " + course2 + ", " + course3 + ", " + course4;
}