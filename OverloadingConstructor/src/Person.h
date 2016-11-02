/*
 * Person.h
 *
 *  Created on: Nov 2, 2016
 *      Author: inchanhwang
 */

#ifndef PERSON_H_
#define PERSON_H_

namespace std {

class Person {

private:
		string name;
		int age;

public:
	Person();

	//Person(string name, int age);
	Person(string newName){name = newName; age = 0;};
	Person(string newName, int newAge);
	string toString();
};

} /* namespace std */

#endif /* PERSON_H_ */
