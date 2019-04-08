/*
 * 1.cpp
 *
 *  Created on: 2012-11-19
 *      Author: ???
 *      Function??????????????????????
 *
 */

int temp, m, n;
int a[100], b[100];

void scanf() {//??
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
}
void bubblesorta() {//???????????
	for (int i = 0; i < m; i++)
		for (int j = 1; j < m - i; j++) {
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}

}
void bubblesortb() {//???????????
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n - i; j++) {
			if (b[j] < b[j - 1]) {
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
		}

}

void printf() {//??
	for (int i = 0; i < m; i++) {
		if (i)
			cout << " " << a[i];
		else
			cout << a[i];
	}
		for (int i = 0; i < n; i++)
			cout << " " << b[i];
	}
	int main() {

		scanf();
		bubblesorta();
		bubblesortb();
		printf();
		return 0;
	}
