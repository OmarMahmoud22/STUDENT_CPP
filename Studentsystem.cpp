// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
class Student {
private:
    int id;
    string name;
    double gpa;
public:
    Student(int i, string n, double g)
    {
        id = i;
        name = n;
        gpa = g;

    }
    void display() {
        cout << "id: " << id << "name: " << "gpa: " << gpa << endl;
    }

};

int main() {
    //display
    vector<Student> students;
    Student s1(1, "omar", 3.5);
    students.push_back(s1);

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }
    //...........................
    //adding by user and display
    int id;
    string name;
    double gpa;
    cout << "enter id";
    cin >> id;
    cout << " enter name: ";
    cin >> name;
    cout << " enter gpa : ";
    cin >> gpa;

    Student s2(id, name, gpa);
    students.push_back(s2);

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }


    return 0;
}