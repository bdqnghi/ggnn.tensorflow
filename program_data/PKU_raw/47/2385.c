/*
 * affairs.cpp
 *
 *  Created on: 2012-11-1
 *      Author: Administrator
 */

int main() {
	int a[100], i, j, k, n, temp;//i,j,k??????temp?????
	cin >> n;
	for (k = 1; k <= n; k++) {
		cin >> a[k];//??????
	}
	for (i = 1, j = n; i < j; i++, j--) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;//??a[i]?a[j]
	}
	cout << a[1];
	for (k = 2; k <= n; k++) {
		cout << " " << a[k];//a[1]???????????????????
	}
	return 0;
}
