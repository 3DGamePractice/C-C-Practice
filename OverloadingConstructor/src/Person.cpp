/*
 * Person.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: inchanhwang
 */
#include <sstream>
#include "Person.h"

namespace std {


string Person::toString(){
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();

}

} /* namespace std */
