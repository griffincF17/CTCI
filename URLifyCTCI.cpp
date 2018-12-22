/*
Programmer: Cody Griffin
Date: 12/19/2018
Program: URLify (CTCI 6th Edition)
*/

#include <iostream>

using namespace std;

int main() {
	const char* str = "Welcome to the Jungle";

	cout << "Original string: " << str << endl;

	cout << "URLified string: ";
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			cout << "%20";
		}
		else {
			cout << str[i];
		}
	}

	cin.get();
	return 0;
}