/*
 * repeatnumber.cpp
 *
 *  Created on: 2012-11-16
 *      Author: ???
 */

int main() {
	int n, i, j = 2, m; //??int???
	int a[20010], b[100]; //????????
	cin >> n; //??n
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	b[1] = a[1];
	for (i = 2; i <= n; i++) {
		for (m = 1; m <= i - 1; m++) {
			if (a[m] == a[i])
				break; //??a[m]??a[i]???????
		}
		if (m == i) {
			b[j] = a[i];
			j++;
		}//?m??i??b[j]??a[i]
	}
	for (i = 1; i <= j - 1; i++) {
		if (i < j - 1) {
			cout << b[i] << " ";
		} else
			cout << b[i];
	}//?b[100]??????????
	return 0;
}

