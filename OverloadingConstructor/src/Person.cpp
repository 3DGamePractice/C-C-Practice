/*
 * Person.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: inchanhwang
 */
#include <sstream>
#include "Person.h"

namespace std {

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge){
	this->name = newName;
	this->age = newAge;

	//cout << "memory location object " <<  << endl;
};

string Person::toString(){
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();

}

} /* namespace std */
