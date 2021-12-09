#include <iostream>
#include <cmath>

using namespace std;

long long int sumfibonacci(long long int n) {
	long long int sumout = 1;
	long long int out = 0;
	long long int first = 0;
	long long int second = 1;
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		while ((n--) - 1) {
			out = first + second;
			first = second % 10;
			second = out%10;
			//sumout = (sumout + out) % 10;
		}
	}
	return out;
	//return sumout;
}
int main() {
	long long int n;
	cin >> n;
	cout << "Sum of square of fibs upto " << n;
	cout << " end with ";
	cout << (sumfibonacci(n) % 10 * sumfibonacci(n + 1) % 10) % 10;
}