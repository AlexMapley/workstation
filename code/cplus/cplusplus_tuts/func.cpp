#include <iostream>

using namespace std;

int addition (int a, int b) {
	int r;
	r=a+b;
	return r;
}

void printmessage() {
	cout << "I'm a function!\n";
}

int main() {
	int z;
	z = addition (5,3);
	cout << "The result is " << z << '\n';
	printmessage();
}
