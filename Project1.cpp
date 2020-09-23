//Libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <time.h>

//Header files
#include "Student.h"
#include "Student_List.h"
#include "Professor.h"
#include "Professor_List.h"

using namespace std;
int menu()
{
    
    //declare a pointer based on included class and set to NULL
    int choice;

    system("CLS");
    cout << "==========================================\n";
    cout << "Main Menu\n"
        << "==========================================\n"
        << "Student Info\n"
        << "1.  Insert record at the front of the list\n"
        << "2.  Insert record at the back of the list\n"
        << "3.  Delete record from the list\n"
        << "4.  Modify record from the list\n"
        << "5.  View the content\n"

        << "\nProfessor Info\n"
        << "6.  Insert record at the front of the list\n"
        << "7.  Insert record at the back of the list\n"
        << "8.  Delete record from the list\n"
        << "9.  Modify record from the list\n"
        << "10. View the content\n"
        << "11. Exit\n"
        << "==========================================\n"
        << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int main(int argc, char* argv[])
{
    int option;
    string first, last, id, rank, recKey;
    Faculty *sptr;
    Student_List* slList = NULL;
    Student* sl = new Student("", "", "");
    

    Professor_List* plList = NULL;
    Professor* pl = new Professor("", "", "", "");

    //if (clList ->listCheck(clList))
    //    cout << "Empty." << endl;
    //if (clList->listCheck(clList))
    //    cout << "Empty." << endl;
    //else
    //    cout << "It has a record: " << clList->printSize(clList) << endl;
    do {
        option = menu();
        switch (option) {
        case 1:

            //use method within class to insert data to the front
            //pass the pointer and the data to function
            cout << "Enter the First Name of the Student: ";
            cin >> first;
            cout << "Enter the Last Name of the Student: ";
            cin >> last;
            cout << "Enter the Student ID of the Student: ";
            cin >> id;
            sl = new Student(first, last , id);
            slList->pushFront(slList, sl);
            cout << "==========================================\n";
            cout << "Student Record Added.\n";
            cout << "==========================================\n";
            system("pause");
            break;

        case 2:

            //use mehtod within class to insert data to the back
            //pass the pointer and the data to function 
            cout << "Enter the First Name of the Student: ";
            cin >> first;
            cout << "Enter the Last Name of the Student: ";
            cin >> last;
            cout << "Enter the Student ID of the Student: ";
            cin >> id;
            sl = new Student(first, last, id);
            slList->pushBack(slList, sl);
            cout << "==========================================\n";
            cout << "Student Record Added.\n";
            cout << "==========================================\n";
            system("pause");
            break;

        case 3:

            //Delete method to remove the reocrd from the list
            cout << "Enter ID/Key of the record you wish to delete: ";
            cin >> recKey;
            cout << "==========================================\n";
            if (slList->deleteRec(slList, recKey))
            {
                cout << "Student Record Deleted.\n";
                cout << "==========================================\n";
            }
            else
            {
                cout << "No Record Deleted.\n";
                cout << "==========================================\n";
            }
            system("pause");
            break;

        case 4:

            //Modify method to remove the reocrd from the list
            cout << "Enter ID/Key of the record you wish to Modify: ";
            cin >> recKey;
            cout << "==========================================\n";
            if (slList->deleteRec(slList, recKey))
            {
                cout << "Enter the First Name of the Student: ";
                cin >> first;
                cout << "Enter the Last Name of the Student: ";
                cin >> last;
                cout << "Enter the Student ID of the Student: ";
                cin >> id;
                sl = new Student(first, last, id);
                slList->pushBack(slList, sl);
                cout << "==========================================\n";
                cout << "Student Record Modified.\n";
                cout << "==========================================\n";
                system("pause");
            }
            else
            {
                cout << "No Record Found For Modification.\n";
                cout << "==========================================\n";
            }
            system("pause");
            break;

        case 5:

            //call method to print the contents of the Student list
            system("CLS");
            slList -> printList(slList);
            system("pause");
            break;

        case 6:

            //use method within class to insert data to the front
            //pass the pointer and the data to function
            cout << "Enter the First Name of the Professor: ";
            cin >> first;
            cout << "Enter the Last Name of the Professor: ";
            cin >> last;
            cout << "Enter the Rank of the Professor: ";
            cin >> rank;
            cout << "Enter the Professor ID of the Professor: ";
            cin >> id;
            pl = new Professor(first, last, rank, id);
            plList->pushFront(plList, pl);
            cout << "==========================================\n";
            cout << "Professor Record Added.\n";
            cout << "==========================================\n";
            system("pause");
            break;

        case 7:

            //use method within class to insert data to the back
            //pass the pointer and the data to function 
            cout << "Enter the First Name of the Professor: ";
            cin >> first;
            cout << "Enter the Last Name of the Professor: ";
            cin >> last;
            cout << "Enter the Rank of the Professor: ";
            cin >> rank;
            cout << "Enter the Professor ID of the Student: ";
            cin >> id;
            pl = new Professor(first, last, rank, id);
            plList->pushBack(plList, pl);
            cout << "==========================================\n";
            cout << "Professor Record Added.\n";
            cout << "==========================================\n";
            system("pause");
            break;

        case 8:

            //Delete method to remove the reocrd from the list
            cout << "Enter ID/Key of the record you wish to delete: ";
            cin >> recKey;
            cout << "==========================================\n";
            if (plList->deleteRec(plList, recKey))
            {
                cout << "Professor Record Deleted.\n";
                cout << "==========================================\n";
            }
            else
            {
                cout << "No Record Deleted.\n";
                cout << "==========================================\n";
            }
            system("pause");
            break;

        case 9:

            //Delete method to remove the reocrd from the list
            cout << "Enter ID/Key of the record you wish to delete: ";
            cin >> recKey;
            cout << "==========================================\n";
            if (plList->deleteRec(plList, recKey))
            {
                cout << "Enter the First Name of the Professor: ";
                cin >> first;
                cout << "Enter the Last Name of the Professor: ";
                cin >> last;
                cout << "Enter the Rank of the Professor: ";
                cin >> rank;
                cout << "Enter the Professor ID of the Student: ";
                cin >> id;
                pl = new Professor(first, last, rank, id);
                plList->pushBack(plList, pl);
                cout << "==========================================\n";
                cout << "Professor Record Modified.\n";
                cout << "==========================================\n";
                system("pause");
            }
            else
            {
                cout << "No Record Found For Modification.\n";
                cout << "==========================================\n";
            }
            system("pause");
            break;

        case 10:

            //call method to print the contents of the Student list
            system("CLS");
            plList->printList(plList);
            system("pause");
            break;

        case 11:

            cout << "Good Bye...\n";
            system("pause");
            break;

        default:

            cout << "Invlaid Choice!!!\n";
            system("pause");
        }
    } while (option != 11);
}