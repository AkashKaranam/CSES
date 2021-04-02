#include <iostream>

using namespace std;

int main() {
	long long n;
	// Read in from standard input
	cin >> n;
	while (true) {
		// Print out to standard output
		cout << n << " ";
		if(n == 1) break;
		if(n%2 == 0) n /= 2;
		else n = n * 3 + 1;
	}
	cout << "\n";
}