//Write a C++ code to Print Table of any Number.

#include <iostream>
using namespace std;
int main() {

	int a, i;

	cout << "Enter any digit= ";

	cin >> a;

	for (i = 1; i <= 10; i++) {

		cout << a << " x " << i << " = " << i * a << '\n';

	}

	return 0;
}
