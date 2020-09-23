//Professor_List.cpp
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Professor_List.h"
using namespace std;

//constructors
Professor_List::Professor_List()
{
	insertData(NULL);
	this->next = NULL;
}

Professor_List::Professor_List(Professor* value)
{
	insertData(value);
	this->next = NULL;
}

//mutators
void Professor_List::insertData(Professor* data)
{
	payload = data;
	key = data->getID();
}

void Professor_List::pushFront(Professor_List*& head, Professor* data)
{
	Professor_List* last = head;
	Professor_List* mynode = new Professor_List(data);
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

void Professor_List::pushBack(Professor_List*& head, Professor* data)
{
	Professor_List* mynode = new Professor_List(data);
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

bool Professor_List::deleteRec(Professor_List*& head, string recKey)
{
	Professor_List* position = head;
	Professor_List* previousPos = head;
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
void Professor_List::printList(Professor_List*& head) const
{
	Professor_List* position = head;
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
		cout << "Payload = " << position->payload->getInfo() << endl;
		//cout << "Key: " << position->key << endl;
		position = position->next; //moving pointer

	}
	cout << "==========================================\n";
}

int Professor_List::printSize(Professor_List* head) const
{
	int counter = 0;
	Professor_List* position = head;
	while (position != NULL)
	{
		counter++;
		position = position->next;
	}
	return counter;
}


bool Professor_List::listCheck(Professor_List* head) const
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