//Client.cpp
#include "Professor.h"

//constructors
Professor::Professor()
{
	setInfo("", "", "", "");
}

Professor::Professor(string first, string last, string rk, string id)
{
	setInfo(first, last, rk, id);
}

//mutators
void Professor::setInfo(string first, string last, string rk, string id)
{
	first_name = first;
	last_name = last;
	rank = rk;
	professorID = id;
}

//accessors
string Professor::getID()
{
	return professorID;
}

string Professor::getInfo()
{
	return "Professor Name: " + first_name + " " + last_name + "\n" 
		+ "Professor Rank: " + rank + "\n"
		+ "Professor ID: " + professorID;
}