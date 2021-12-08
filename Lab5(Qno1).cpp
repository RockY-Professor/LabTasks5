Qno1: Write a c++ code to add first 10 natural numbers

#include <iostream>
using namespace std;
int main() {

	cout << "Sum of first 10 natural Numbers " << '\n';

	int a, sum = 0;

	for (a = 1; a <= 10; a++) {

		cout << "Sum= " << sum << '\n';

		sum = sum + a;
	}



	return 0;
}
