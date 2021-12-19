
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	const int n = 5;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0];
	int max = a[0];
	for (int i = 0; i < n; i++) {

		if (a[i] < min) min = a[i];
	}
	for (int i = 0; i < n; i++) {

		if (a[i] > max) max = a[i];
	}
	cout << min << endl;
	cout << max << endl;
	cout << (max + min) / 2;
	