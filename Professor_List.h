//Professor_List.h
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Professor.h"
#ifndef PROFESSOR_LIST_H
#define PROFESSOR_LIST_H
using namespace std;


class Professor_List
{
public:
	//constructors
	Professor_List();
	Professor_List(Professor*);

	//mutators
	void insertData(Professor*);
	void pushFront(Professor_List*&, Professor*);
	void pushBack(Professor_List*&, Professor*);
	bool deleteRec(Professor_List*&, string recKey);

	//accessors
	bool listCheck(Professor_List*) const;
	void printList(Professor_List*&) const;
	int printSize(Professor_List*) const;

private:
	Professor* payload;
	Professor_List* next;
	string key;

};
#endif