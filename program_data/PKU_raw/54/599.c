/*
 * assignment.cpp
 *
 *  Created on: 2010-11-23
 *      Author: ??
 *      ?? ???
 */


int main() {
	int n, k, m = 1, i,m0=1;
	cin >> n >> k;
	while (1) {
		for (i = 1; i <= n; i++) {
			if (m % (n - 1) == 0)
				m = n * m / (n - 1) + k;
			else {
				m0++;
				m=m0;
				i=1;
				break;
			}
		}
		if (i == n+1) {
			cout << m;
			return 0;
		}
	}
}
