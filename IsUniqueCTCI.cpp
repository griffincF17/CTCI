#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isUnique(string s) {
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i + 1]) {
			return false;
		}
	}
	return true;
}
int main() {
	string str;

	cout << "Enter a string: ";
	cin >> str;
	cout << endl;

	string sortStr = str;
	sort(sortStr.begin(), sortStr.end());
	cout << "Result of the sort: " << sortStr << endl;

	bool uniq = isUnique(sortStr);
	if (uniq == true) {
		cout << "This string has all unique characters." << endl;
	}
	else {
		cout << "This string contains repeating characters." << endl;
	}

	cin.ignore();
	cin.get();
	return 0;
}