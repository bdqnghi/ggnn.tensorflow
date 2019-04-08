/*
 * 2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: lenovo
 */
int main() {
	int n, i, j, sum = 0, min = 0,  l, k;
	cin >> n;
	l = n;
	for(k=0;k<l;k++){
		sum = 0;
		int a[l][l];
		for (i = 0; i < l; i++)
			for (j = 0; j < l; j++)
				cin >> a[i][j];
		n=l;
		while (n > 1) {
			for (i = 0; i < n; i++) {
				min = a[i][0];
				for (j = 0; j < n; j++)
					if (min > a[i][j]) {
						min = a[i][j];
					}
				for (j = 0; j < n; j++)
					a[i][j] = a[i][j] - min;
			}
			for (j = 0; j < n; j++) {
				min = a[0][j];
				for (i = 0; i < n; i++)
					if (min > a[i][j]) {
						min = a[i][j];
					}
				for (i = 0; i < n; i++)
					a[i][j] = a[i][j] - min;
			}
			sum = sum + a[1][1];
			for (i = 1; i < n - 1; i++)
				for (j = 0; j < n; j++)
					a[i][j] = a[i + 1][j];
			for (j = 1; j < n - 1; j++)
				for (i = 0; i < n; i++)
					a[i][j] = a[i][j + 1];
			n = n - 1;
		}
		cout << sum << endl;
}
	return 0;
}
