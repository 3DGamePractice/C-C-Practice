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
	Person(): name("unnamed"), age(0){};

	//Person(string name, int age);
	Person(string newName){name = newName; age = 0;};
	Person(string newName, int newAge): name(newName), age(newAge){};
	string toString();
};

} /* namespace std */

#endif /* PERSON_H_ */
