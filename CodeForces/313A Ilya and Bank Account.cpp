#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n >= 0) {
		cout << n;
	} else {
		int a = n / 10;
		int b = n / 10 - (n % 100) / 10 + n % 10;
		if (a > b) {
			cout << a;
		}
		else cout << b;
	}
}