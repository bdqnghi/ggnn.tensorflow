/*
 *  ?????.cpp
 *  Created on: 2012-11-24
 *  Author: ???
 */
char a[300], b[300], c[300], tem[300];
int i, len1, len2, len3, firstout;
int plu(int n, int add) {
	if (n == 0) {
		if (a[0] + b[0] + add >= 106) {
			c[0] = a[0] + b[0] + add - 58;
			for(i=len3;i>=1;i--){
				c[i]=c[i-1];
			}
			c[0]='1';len3=len3+1;
		} else {
			c[0] = a[0] + b[0] + add - 48;
		}
	} else {
		if (a[n] + b[n] + add >= 106) {
			if (n == (len3 - 1)) {
				c[n] = a[n] + b[n] + add - 58;
				return plu(n - 1, 1);
			} else {
				c[n] = a[n] + b[n] + add - 58;
				return plu(n - 1, 1);
			}
		} else {
			c[n] = a[n] + b[n] + add - 48;
			return plu(n - 1, 0);
		}
	}
}
int main() {
	for (i = 0; i < 300; i++) {
		a[i] = b[i] = c[i] = tem[i] = '0';
	}
	cin.getline(a, 300);
	cin.getline(b, 300);
	len1 = strlen(a);
	a[len1] = '0';
	len2 = strlen(b);
	b[len2] = '0';
	if (len1 > len2) {
		len3 = len1;
		for (i = len2 - 1; i >= 0; i--) {
			tem[i + (len3 - len2)] = b[i];
		}
		strcpy(b, tem);
	} else {
		len3 = len2;
		for (i = len1 - 1; i >= 0; i--) {
			tem[i + (len3 - len1)] = a[i];
		}
		strcpy(a, tem);
	}
	plu(len3 - 1, 0);
	for (i = 0; i < len3; i++) {
		if (c[i] != '0') {
			firstout = i;
			break;
		}
	}
	for (i = firstout; i < len3; i++) {
		cout << c[i];
	}
	return 0;
}
