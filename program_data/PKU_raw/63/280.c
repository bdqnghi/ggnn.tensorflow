/*
 * eamm.cpp
 *
 *  Created on: 2010-11-20
 *      Author: 1000012763
 *      ????
 */

int main() {

	//????1
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	int a[x1][y1];
	for (int i = 0; i < x1; i++)
		for (int j = 0; j < y1; j++)
			cin >> a[i][j];

	//????2
	cin >> x2 >> y2;
	int b[x2][y2];
	for (int i = 0; i < x2; i++)
		for (int j = 0; j < y2; j++)
			cin >> b[i][j];

	//????????
	int x, y;
	if (x1 >= y1)
		x = x1 > x2 ? x1 : x2;
	else
		x = x1 < x2 ? x1 : x2;
	if (x2 <= y2)
		y = y1 > y2 ? y1 : y2;
	else
		y = y1 < y2 ? y1 : y2;

	//???????
	int c[x][y];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			c[i][j] = 0;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			for (int k = 0; k < y1; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}

	//????
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y - 1; j++)
			cout << c[i][j] << " ";
		cout << c[i][y - 1] << endl;//?????
	}
	return 0;
}
