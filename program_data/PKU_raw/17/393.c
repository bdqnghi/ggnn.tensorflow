/*
 * XIII4.cpp
 *
 *  Created on: 2012-11-30
 *      Author: 12100
 *      ??:??????
 */
char a[101], b[101];
int panduan[101];
int l;
void deal(int k) {
	if (k > 0) {
		if (a[k - 1] == ')')
			{panduan[k - 1] = 1;deal(k - 1);}
		else if (a[k - 1] == '(') {
			panduan[k - 1] = 2;
			for (int i = k; i < l; i++)
				if (panduan[i] == 1) {
					panduan[k - 1] = 0;
					panduan[i] = 0;
					break;
				}
			deal(k - 1);
		} else
			deal(k - 1);
	}
}
int main() {
	int i;
	for (i = 0; i < 101; i++) {
		a[i] = ' ';
		b[i] = ' ';
		panduan[i] = 0;
	}
	while (cin >> a) {
		l = strlen(a);
		deal(l);
		for (i = 0; i < l; i++) {
			if (panduan[i] == 1)
				b[i] = '?';
			if (panduan[i] == 2)
				b[i] = '$';
		}
		for (i = 0; i < l; i++)
			cout << a[i];
		cout << endl;
		for (i = 0; i < l; i++)
			cout << b[i];
		cout << endl;
		for (i = 0; i < 101; i++) {
			a[i] = ' ';
			b[i] = ' ';
			panduan[i] = 0;
		}
	}
}
