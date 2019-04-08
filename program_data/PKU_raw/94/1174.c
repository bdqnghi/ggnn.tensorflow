/*
 * Oddsingleincreasingsequence.cpp
 *
 *  Created on: 2012-11-18
 *      Author: ???
 */
int main() {
	int n, i, j = 0, temp, m;    //??int???
	cin >> n;                    //??n
	int a[n], b[n];              //????????
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}                            //??????????
	for (i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			b[j] = a[i];
			j++;
		} else
			continue;
	}                           //???????????????
	for (i = 0; i < j - 1; i++) {
		for (m = 0; m < j - i-1; m++)
			if (b[m] > b[m + 1]) {
				temp = b[m ];
				b[m] = b[m+1];
				b[m + 1] = temp;
			}
	}                           //???????????
	for (m = 0; m < j; m++) {
		if (m < j - 1)
			cout << b[m] << ",";
		else
			cout << b[m];        //???????
	}

}
