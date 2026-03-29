#ifndef Person_H_
#define Person_H_

using namespace std;
#include <string>

class Person
{
protected:
	string name;
public:
	Person(string name);
	string getname();


};


#endif // !Person_H_