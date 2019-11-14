#include <iostream>
using namespace std;

long factorial (long a);

int main () {
	long number;
	cin >> number;
	cout << number << "! = " << factorial (number) << "\n";
	return 0;
}

long factorial (long a) {
	if (a == 0) {
		return 1;
	}
	return a * factorial (a-1);
}
