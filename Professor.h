//Professor.h
#include<string>
#include "Faculty.h"
#ifndef PROFESSOR_H
#define PROFESSOR_H
using namespace std;



class Professor : public Faculty
{
	public:
		//constructors
		Professor();
		Professor(string, string, string, string);

		//mutators
		void setInfo(string, string, string, string);

		//accessors
		string getInfo();
		string getID();
	private:
		string first_name;
		string last_name;
		string rank;
		string professorID;
		//utilities
};
#endif