#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (a[0] == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}