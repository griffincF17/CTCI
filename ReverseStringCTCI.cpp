/*
Programmer: Cody Griffin
Date: 12/19/2018
Program: Reverse String (CTCI 6th edition)
*/

#include <iostream>
using namespace std;

void reverse(const char* str) {
	for (int i = strlen(str)-1; i >= 0; i--) {
		cout << str[i];
	}
	cout << endl;
}

int main() {
	const char* st = "Mello Yello";

	cout << "String (in normal order): " << st << endl;
	cout << "String (in reverse order): ";
	reverse(st);
	
	cin.get();
	return 0;
}