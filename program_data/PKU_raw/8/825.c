/*
 * ModularizedProgramming.cpp
 *
 *  Created on: 2012-11-23
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int a[200];
int b[100];
int lena = 0;//a?????
int lenb = 0;//b?????
void Input() {//??
	cin >> lena >> lenb;
	for (int i = 0; i < lena; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < lenb; i++) {
		cin >> b[i];
	}
}
void Sort() {//??
	for (int i = 1; i <= lena - 1; i++) {
		for (int j = 0; j <= lena - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i <= lenb - 1; i++) {
		for (int j = 0; j <= lenb - 1 - i; j++) {
			if (b[j] > b[j + 1]) {
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
}
void Catenate() {//??
	for (int i = 0; i <= lenb - 1; i++) {
		a[lena + i] = b[i];
	}
}
void Output() {//??
	cout << a[0];
	for (int i = 1; i <= lena + lenb - 1; i++) {
		cout << ' ' << a[i];
	}
}
int main() {//???
	Input();
	Sort();
	Catenate();
	Output();
	return 0;
}
