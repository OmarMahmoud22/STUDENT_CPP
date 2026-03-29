#include "Person.h"

Person::Person(string name) {
	this->name = name;
}
string Person::getname() {
	return this->name;
}