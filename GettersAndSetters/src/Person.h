/*
 * Person.h
 *
 *  Created on: Nov 1, 2016
 *      Author: inchanhwang
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {

private:
	string name;

public:
	Person();
	string toString();
	void setName();
	void setName(string newName);
	string getName();
	virtual ~Person();
};

#endif /* PERSON_H_ */
