/*
 * kuohaopipei.cpp
 *
 *  Created on: 2012-12-5
 *      Author: Lenovo
 */
int main() {
	int i, j, l = 0;
	char a[105], b[105];
	while (cin >> a) {
		l=0;
		for (i = 0; i < strlen(a); i++)
			b[i] = ' ';
		for (i = 0; i < strlen(a); i++) {
			if (a[i] == ')' && l == 0) {
				b[i] = '?';
				continue;
			}
			if (a[i] == '(') {
				b[i] = '$';
				l++;
			}
			if (a[i] == ')' && l > 0) {
				for (j = i - 1; j >= 0; j--) {
					if (b[j] == '$') {
						b[j] = ' ';
						l--;
						break;
					}
				}
				continue;
			}
		}
		cout << a << endl;
		for (i = 0; i < strlen(a); i++)
			cout << b[i];
		cout<<endl;
	}
	return 0;

}
