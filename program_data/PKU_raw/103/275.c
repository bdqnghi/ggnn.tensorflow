/*
 * ??????.cpp
 *
 *  Created on: 2011-12-31
 *      Author: ???
 */

int main() {
	char a[1000];
	cin >> a;
	int i = 0, j, len = strlen(a);
	while (i < len) {
		if (a[i] >= 'a')
			a[i] = a[i] - 32;
		j = i;
		while (true) {
			if (a[i + 1] >= 'a')
				a[i + 1] = a[i + 1] - 32;
			if (a[i + 1] == a[j])
				i++;
			else
				break;
		}
		cout << "(" << a[j] << "," << i - j + 1 << ")";
		i++;
	}
	return 0;
}
