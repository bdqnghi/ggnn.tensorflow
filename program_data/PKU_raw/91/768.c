/*
 * theoutputstring.cpp
 *
 *  Created on: 2012-12-17
 *      Author: ???
 */
int main() {
	char a[101], *p = a, b[100], *q = b;
	int n;
	cin.getline(a,101);
	n = strlen(a);
	while (p < a + n - 1) {
		*q = *p + *(p + 1);
		p++;
		q++;
	}

		*q = *p + *a;
	for (q = b; q < b + n; q++)
		cout << *q;
	return 0;
}
