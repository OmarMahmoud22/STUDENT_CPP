#include "Student.h"
Student::Student(int i, string name,double g):Person(name) {
	
	this->gpa = g;
	this->id = i;
};
void Student::display() {
	cout << "id is: " << this->id << endl;
	cout << "name is: " << this->name << endl;
	cout << "gpa is: " << this->gpa << endl;
}

double Student::getgpa() {
	return this->gpa;
}
int Student::getId() {
	return this->id;
}
string Student::getname() {
	return this->name;
}

void Student::addCourse(string course) {
	pair<set<string>::iterator, bool> resault = courses.insert(course);
	if (resault.second) {
		cout << "added"<<endl;
	}
	else {
		cout << "already added"<<endl;
	}


}
void Student::ShowCourse() {
	if (courses.empty()) {
		cout << "no courses" << endl;
		return;
	}
    cout << "name : " <<this->name << endl;
    cout << "id : " << this->id << endl;
	cout << "courses: ";
    for(string x : courses){
    cout << x << endl;
}
    }
	
