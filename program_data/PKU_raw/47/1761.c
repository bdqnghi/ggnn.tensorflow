/*
 * shuzunixuzhi.cpp
 *???????????
 *  Created on: 2012-12-17
 *      Author: ??
 */

int main() {
	int a[101];
	int i, n, *p = a;//??
	cin >> n;//??
	for (i = 0; i < n; i++)
		cin >> *(p++);//????
	p = a;
	for (i = 0; i < n / 2; i++)
		swap(*(p + i), *(p + n - i - 1));//??
	cout << *(p++);//??
	n--;
	while (n > 0) {
		cout << " " << *(p++);
		n--;//??????
	}
	return 0;
}
