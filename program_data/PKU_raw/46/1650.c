/*
 * 1.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11294
 */
int main() {
	int row, col;
	cin >> row >> col;
	int array[row][col];
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cin >> array[i][j];
		}
	}
	int p = 0;
	for (; !(2 * p >= col - 2 || 2 * p >= row - 2);) {
		for (i = p; i <= col - 2 - p; i++) {
			cout << array[p][i] << endl;
		}
		for (j = p; j <= row - 2 - p; j++) {
			cout << array[j][col - 1 - p] << endl;
		}
		for (i = p; i <= col - 2 - p; i++) {
			cout << array[row - 1 - p][col - i - 1] << endl;
		}
		for (j = p; j <= row - 2 - p; j++) {
			cout << array[row - 1 - j][p] << endl;
		}
		p++;
	}
	if (col == row) {
		for (i = p; i <= col - 1 - p; i++) {
			cout << array[p][i] << endl;
		}
		if(col%2==0){
		for (i = col - 1 - p; i >= p; i--) {
			cout << array[p + 1][i] << endl;
		}
	}}
	if (col > row) {
		for (i = p; i <= col - 1 - p; i++) {
			cout << array[p][i] << endl;
		}
		if(row%2==0){
		for (i = col - 1 - p; i >= p; i--) {
			cout << array[p + 1][i] << endl;
		}
	}}
	if (col < row) {
		for (i = p; i <= row - 1 - p; i++) {
			cout << array[i][p] << endl;
		}
		if(col%2==0){
		for ( i = row - 1 - p;i >= p; i--) {
			cout << array[i][p+1] << endl;
		}
	}}
	return 0;
}
