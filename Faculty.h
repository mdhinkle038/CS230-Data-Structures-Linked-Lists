//Faculty.h
#include<string>
using namespace std;
#ifndef FACULTY_H
#define FACULTY_H
class Faculty
{
	public:
		//Faculty();
		virtual string getInfo() = 0;
		virtual string getID() = 0;

	protected:
		string first_name;
		string last_name;
		string rank;
		string professorID;
};
#endif
