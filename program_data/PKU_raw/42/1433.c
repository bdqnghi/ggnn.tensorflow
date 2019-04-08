/*
 * sanchushuzu.cpp
 *??????????
 *  Created on: 2012-11-2
 *      Author: ??
 */

int main() {
	int n, i, j = 0, k, num = 0;
	cin >> n;//????
	int a[n];//????
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;//??
	for (i = 0; i < n; i++)
		if (a[i] != k)
			num++;
	for (i = 0; i < n; i++)
		if (a[i] != k) {
			a[j] = a[i];
			j++;
		}//????
	if (a[0] != k)
		cout << a[0];
	for (i = 1; i < j; i++)
		cout << " " << a[i];//??
	return 0;
}