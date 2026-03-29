// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
#include "Student.h"

int main() {
	int id;
	double gpa;
	string name;
	vector<Student>students;

		int choice;
	while (choice != 8) {
		cout << "1- add Student" << endl;
		cout << "2- display" << endl;
		cout << "3- searching by id" << endl;
		cout << "4- remove" << endl;
		cout << "5- add course" << endl;
		cout << "6- show courses" << endl;
		cout << "7- break" << endl;
		cout << "give me your choise";
		cin >> choice;



		if (choice == 1) {
			cout << "give me id: " << endl;
			cin >> id;
			cout << "give me name: " << endl;
			cin >> name;
			cout << "give me gpa " << endl;
			cin >> gpa;
			Student s(id, name, gpa);
			students.push_back(s);
		}

		else if (choice == 2) {
			for (int i = 0; i < students.size(); i++)
			{
				students[i].display();
			}
		}
		else if (choice == 3) {
			cout << "get me id: " << endl;
// 			int id;
			cin >> id;
			bool found = false;
			for (int i = 0; i < students.size(); i++)
			{
				if (students[i].getId() == id) {
					students[i].display();
					found = true;
				}
			}
				 if (!found) {
					cout << "this id is not found";
				}
		}
		else if (choice == 4) {
			cout << " get me id: " << endl;
// 			int id;
			cin >> id;
			bool removed = false;
			for (int i = 0; i < students.size(); i++)
			{
				if (students[i].getId() == id) {
					students.erase(students.begin() + i);
					removed = true;
					cout << "removed" << endl;
					break;
				}
			}
				 if (!removed) {
					cout << "not found this id";
				}
		}
		else if (choice == 5) {
// 			int id;
			string course;
			cout << "Enter Student ID: ";
			cin >> id;

			bool found = false;
			for (int i = 0; i < students.size(); i++) {
				if (students[i].getId() == id) {
					cout << "Enter Course Name: ";
					cin >> course;
					students[i].addCourse(course);
					found = true;
					break;
				}
			}
			if (!found) cout << "Student not found\n";
		}
		else if (choice == 6) {
// 			int id;
			cout << "give me id: " << endl;
			cin >> id;
			bool found = false;
			for (int i = 0; i < students.size(); i++)
			{
				if(students[i].getId() == id){
				students[i].ShowCourse();
				found = true;
				break;


				}
				

			if (!found) 
			{
				cout << "Student not found" << endl;
			}
			}
		}
		else if (choice == 7) {
			break;
		}
		else if(choice >=8){
		    cout<< "this choice is out of menu scop";
		}
	
	}

	return 0;
}
