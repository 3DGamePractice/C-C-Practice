/*
 * Person.cpp
 *
 *  Created on: Nov 1, 2016
 *      Author: inchanhwang
 */

#include "Person.h"

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";

}


string Person::toString(){
	return "Person's name is : " + name;
}

void Person::setName(string newName){
	name = newName;
}

string Person::getName(){
	return name;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

