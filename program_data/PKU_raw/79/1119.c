/*
 * YueSeFuProblem.cpp
 *
 *  Created on: 2010-11-14
 *      Author: user
 */



int main() {
	while (true) {
		int n, m, i;
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		int f[n + 1];
		for (i = 1; i < n; i++) {
			f[i] = i + 1;
		}
		f[n] = 1;

		int t = 1;

		while (true) {
			if (m == 1) {
				cout << n << endl;
				break;
			} else {
				for (i = 1; i < m - 1; i++) {
					t = f[t];
				}
				f[t] = f[f[t]];
				t = f[t];
				if (f[t] == t) {
					cout << t << endl;
					break;
				}
			}
		}
	}

	return 0;
}

