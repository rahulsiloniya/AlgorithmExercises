#include <iostream>
using namespace std;

int minrefill(int gas[], int n, int l);
int main() {
	int gas[6] = { 0, 200, 375, 550, 750, 950 };
	cout << "Minimum number of refills are " << minrefill(gas, 6, 500);
}
//minrefill implementation
int minrefill(int gas[], int n, int l) {
	int numrefills = 0;
	int currentrefill = 0;
	int lastrefill = 0;
	while (currentrefill <= n) {
		lastrefill = currentrefill;
		while (gas[currentrefill + 1] - gas[lastrefill] <= l && currentrefill <= n) {
			currentrefill += 1;
		}
		if (currentrefill == lastrefill) return -1;
		if (currentrefill <= n) {
			numrefills += 1;
		}
	}
	return numrefills;
}