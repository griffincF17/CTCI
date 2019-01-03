#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool CheckPermutation(string s1, string s2) {
	if (s1.length() != s2.length()) {
		return false;
	}
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	string str1;
	string str2;

	cout << "Enter the 1st string: ";
	cin >> str1;
	cout << endl;

	cout << "Enter the 2nd string: ";
	cin >> str2;
	cout << endl;

	string sortStr1 = str1;
	string sortStr2 = str2;

	sort(sortStr1.begin(), sortStr1.end());
	sort(sortStr2.begin(), sortStr2.end());
	
	bool perm = CheckPermutation(sortStr1, sortStr2);
	if (perm == true) {
		cout << str1 << " and " << str2 << " are permutations.";
	}
	else {
		cout << str1 << " and " << str2 << " are not permutations.";
	}
	cin.ignore();
	cin.get();
	return 0;
}