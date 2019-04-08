/*
 * ????1000012718_25.cpp
 * ???????????
 * ????: 2010-10-29
 * ??: ??
 */

/*#include<iostream>    //?????
 using namespace std;
 //?????

 int main() {
 //??n??
 int n, k, i, j, count = 0; //i, j, count?????
 cin >> n;
 if (n < 1 || n > 100000)
 return 0;

 //???????????
 int num[n];

 //?????n???
 for (i = 0; i < n; i++) {
 cin >> num[i];
 }

 //??????k
 cin >> k;

 //????????k??
 for (i = 0; i < n; i++) {
 while (num[i] == k) {

 //??????????
 for (j = i; j < n; j++) {
 num[j] = num[j + 1];
 }

 count++; //count????k?????
 }
 }

 //??????????
 for (i = 0; i < n - count - 1; i++) {
 cout << num[i] << " ";
 }
 cout << num[i];

 return 0; //????
 }*/

int main() {
	int n, m, k, i = 0, j, temp, a[100000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> m;
		a[i] = m;
	}
	cin >> k;
	for (i = 0; i < n; i++) {
		if (a[i] == k) {
			for (j = i + 1; j < n; j++) {
				if (a[j] != k) {
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;

					break;
				}
			}
		}
	}
	if (a[0]!=k) cout << a[0];
	for (i = 1; i < n; i++) {
		if (a[i] != k)
			cout << ' ' << a[i];

	}
	return 0;
}
