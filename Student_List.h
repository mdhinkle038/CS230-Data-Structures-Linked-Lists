//Student_List.h
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Student.h"
#ifndef STUDENT_LIST_H
#define STUDENT_LIST_H
using namespace std;


class Student_List
{
	public:
		//constructors
		Student_List();
		Student_List(Student*);

		//mutators
		void insertData(Student*);
		void pushFront(Student_List*&, Student*);
		void pushBack(Student_List*&, Student*);
		bool deleteRec(Student_List*&, string recKey);

		//accessors
		bool listCheck(Student_List*) const;
		void printList(Student_List* &) const;
		int printSize(Student_List*) const;

	private:
		Student* payload;
		Student_List* next;
		string key;

};
#endif