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

	cout << person1.toString() << endl;
    cout << person2.toString() << endl;
	return 0;
}