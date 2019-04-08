/*
 * findpoint.cpp
 * ????
 *  Created on: 2012-11-18
 *      Author: ???
 */
int max(int x, int y) {
	if (x >= y)
		return x;
	else
		return y;
}
int min(int x, int y) {
	if (x <= y)
		return x;
	else
		return y;
}
int main() {
	int i, k, a[6][6], Y = 0, max1[6], min1[6];
	for (i = 1; i <= 5; i++) {
		for (k = 1; k <= 5; k++) {
			cin >> a[i][k];
		}
	}
	for (i = 1; i <= 5; i++) {
		max1[i] = max(a[i][1],
				max(a[i][2], max(a[i][3], max(a[i][4], a[i][5]))));
	}
	for (k = 1; k <= 5; k++) {
		min1[k] = min(a[1][k],
				min(a[2][k], min(a[3][k], min(a[4][k], a[5][k]))));
	}
	for (i = 1; i <= 5; i++) {
		for (k = 1; k <= 5; k++) {
			if (max1[i] == min1[k]) {
				Y = 1;
				cout << i << ' ' << k << ' ' << a[i][k] << endl;
			}
		}
	}
	if (Y == 0)
		cout << "not found";
	return 0;
}
