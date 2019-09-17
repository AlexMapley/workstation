#include <iostream>
using namespace std;

int main () {
	int n{10};
	while (n > 0) {
		cout << n << ", ";
		--n;
	}
	cout << "liftoff!\n";

	for (int k =10; k>0; k--) {
		cout << k << ", ";
	}

	string str;
	do {
		cout << "Enter text: ";
		getline (cin, str);
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
}
