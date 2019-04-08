/*
 * 111111111111.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int panrun(int x) {//???????????????366??????365
	if (x % 100 != 0) {
		if (x % 4 == 0 && x % 100 != 0)
			return 366;
		else
			return 365;
	} else {
		if (x % 400 == 0)
			return 366;
		else
			return 365;
	}
}
int main() {
	int y1, m1, d1, y2, m2, d2, sum1 = 0, sum2 = 0, sum3 = 0, sum = 0, i = 0;
	int a[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
			b[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	for (i = y1 + 1; i < y2; i++)
		sum1 = sum1 + panrun(i);
	//cout << sum1 << " ";
	if (panrun(y1) == 366) {
		for (i = 0; i < m1; i++)
			sum2 = sum2 + a[i];
		sum2 = sum2 + d1;
		if (y1 != y2)
			sum2 = 366 - sum2;
	} else {
		for (i = 0; i < m1; i++)
			sum2 = sum2 + b[i];
		sum2 = sum2 + d1;
		if (y1 != y2)
			sum2 = 365 - sum2;
	}
	//cout << sum2 << " ";
	if (panrun(y2) == 366) {
		for (i = 0; i < m2; i++)
			//cout<<"***"<<endl;
			sum3 = sum3 + a[i];
		sum3 = sum3 + d2;
	} else {
		for (i = 0; i < m2; i++)
			sum3 = sum3 + b[i];
		sum3 = sum3 + d2;
	}
	//cout << sum3 << endl;
	if (y1 != y2)
		sum = sum1 + sum2 + sum3;
	else
		sum = sum3 - sum2;
	cout << sum << endl;

	return 0;
}
