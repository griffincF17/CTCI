/*
Programmer: Cody Griffin
Date: 12/22/2018
Program: Magic Index (CTCI 6th Edition)
*/

#include <iostream>
#include <time.h>
using namespace std;

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

void MagicIndex(int a[]) {
	for(int l = 0; l < 10; l++) {
		if (a[l] == l) {
			cout << "Magic index: " << l << endl;
		}
	}
}
int main() {
	srand(time(NULL));
	int arr[10];
	
	for (int i = 0; i < 9; i++) {
		int num = rand() % 10;
		arr[i] = num;
	}
	arr[9] = 9;
	for (int j = 0; j < 10; j++) {
		cout << arr[j] << " ";
	}
	
	cout << endl;

	qsort(arr, 10, sizeof(int), compare);

	cout << endl;
	MagicIndex(arr);
	cin.get();
	return 0;
}