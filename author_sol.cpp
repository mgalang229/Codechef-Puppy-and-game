#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		// the first player can win as long as there is at least one stack that 
		// has an even number of nuts in it because this player can always choose
		// to remove a stack and divide the other stack into two new stacks which
		// both have an odd number of nuts (it is possible since the number is 
		// initially even, and two odd numbers is equal to an even number)
		cout << (a % 2 == 0 || b % 2 == 0 ? "Tuzik" : "Vanka") << '\n';
	}
	return 0;
}
