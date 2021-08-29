#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	set<int> s;
	// simply follow the instructions in the problem statement
	for (int i = 0; i < q; i++) {
		int y, x;
		cin >> y >> x;
		if (y == 1) {
			s.insert(x);
		} else if (y == 2) {
			s.erase(x);
		} else {
			cout << (s.find(x) != s.end() ? "Yes" : "No") << '\n';
		}
	}
	return 0;
}
