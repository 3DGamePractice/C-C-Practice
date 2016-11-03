//============================================================================
// Name        : OverloadingConstructor.cpp
// Author      : inchan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person1;
	Person person2("Bob", 42);

	cout << person1.toString() << "; memory location: "<< &person1 << endl;
    cout << person2.toString() << "; memory location: "<< &person2 << endl;

	return 0;
}
