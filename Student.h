#ifndef Student_H_
#define Student_H_

#include <iostream>
#include <set>
#include "Person.h"
using namespace std;

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:
    Student(int i, string name, double g);
    void display();
    double getgpa();
    int getId();
    string getname();
    void addCourse(string course);
    void ShowCourse();
};

#endif // Student_H_