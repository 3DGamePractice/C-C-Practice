//============================================================================
// Name        : CharArray.cpp
// Author      : inchan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	char text[] = "hello"; //'h', 'e', 'l', 'l', 'o'};
	cout << text << endl;

	for(int i = 0; i<sizeof(text); i++){
		cout << "; " << text[i] << flush;
	}

	int k = 0;

	while(true){
		if(text[k] == 0){
			break;
		}
		cout << text[k] << flush;
		k += 1;

	}

	return 0;
}
