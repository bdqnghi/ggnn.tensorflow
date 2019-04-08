/*????????
 * bookfee.cpp
 *
 *  Created on: 2011-12-23
 *      Author: WJ
 */

int main() {
	int a[101][101], i, j, row, col;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	int up = 0, down = row - 1, left = 0, right = col - 1; //??????????
	int c = row * col;//????????????????
	while (c > 0) {
		for (j = left; j <= right; j++) {
			cout << a[up][j] << endl;
		}
		c -= right-left + 1;
		if (c <= 0)
			break;
		up++;

		for (i = up; i <= down; i++) {
			cout << a[i][right] << endl;
		}
		c -= down - up + 1;
		if (c <= 0)
			break;
		right--;

		for (j = right; j >= left; j--) {
			cout << a[down][j] << endl;
		}
		c -= right - left + 1;
		if (c <= 0)
			break;
		down--;

		for (i = down; i >= up; i--) {
			cout << a[i][left] << endl;
		}
		c -= down - up + 1;
		if (c <= 0)
			break;
		left++;
	}
	return 0;
}
