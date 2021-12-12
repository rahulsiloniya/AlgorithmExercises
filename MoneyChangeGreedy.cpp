#include <iostream>
using namespace std;

int minchange(int money);
int main() {
	int amount;
	cin >> amount;
	cout << minchange(amount);
}
//calculating minimum number of coins needed assuming indefinite supply
int minchange(int money) {
	int denom[3] = { 10, 5, 1 };
	int coins = 0;
	int remain = money;
	while (remain > 0) {
		for (int i = 0; i < 3; i++) {
			if (remain - denom[i] >= 0) {
				coins += 1;
				remain -= denom[i];
				break;
			}
		}
	}
	return coins;
}