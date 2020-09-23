//Student_List.cpp
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Student_List.h"
using namespace std;

//constructors
Student_List::Student_List()
{
	insertData(NULL);
	this->next = NULL;
}

Student_List::Student_List(Student* value)
{
	insertData(value);
	this->next = NULL;
}

//mutators
void Student_List::insertData(Student* data)
{
	payload = data;
	key = data->getID();
}

void Student_List::pushFront(Student_List* &head, Student* data)
{
	Student_List* last = head;
	Student_List* mynode = new Student_List(data);
	if (head == NULL)
	{
		head = mynode;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next; // move the pointer
		}
		last->next = mynode;// link the node to the list
	}
}

void Student_List::pushBack(Student_List*& head, Student* data)
{
	Student_List* mynode = new Student_List(data);
	if (head == NULL)
	{
		head = mynode;
	}
	else
	{
		mynode->next = head; // pointing new node to the head of the list
		head = mynode; // make new node head of the list
	}
}

bool Student_List::deleteRec(Student_List*& head, string recKey)
{
	Student_List* position = head;
	Student_List* previousPos = head;
	bool flag = false;

	if (head == NULL)
	{
		flag = false;
	}
	else
	{
		while (position != NULL)
		{
			if (position->key == recKey)
			{
				if (position == head)
				{
					head = position->next;
				}
				else
				{
					previousPos->next = position->next;
				}
				free(position);
				flag = true;
				break;
			}
			previousPos = position;
			position = position->next;

		}
	}
	return flag;
}


//accessors
void Student_List::printList(Student_List* &head) const
{
	Student_List* position = head;
	cout << "==========================================\n";
	if (listCheck(head))
	{
		cout << "List is Empty.\n";
	}
	else
	{
		cout << "List Size: " << printSize(head) << endl;
	}
	while (position != NULL)
	{
		cout << "==========================================\n";
		cout << "Payload = " << position->payload ->getInfo()<< endl;
		//cout << "Key: " << position->key << endl;
		position = position->next; //moving pointer

	}
	cout << "==========================================\n";
}

int Student_List::printSize(Student_List* head) const
{
	int counter = 0;
	Student_List* position = head;
	while (position != NULL)
	{
		counter++;
		position = position->next;
	}
	return counter;
}


bool Student_List::listCheck(Student_List* head) const
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
