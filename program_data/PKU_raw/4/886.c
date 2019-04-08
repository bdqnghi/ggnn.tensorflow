/*
 * Traverse?Diagonal(Pointer).cpp
 *
 *  Created on: 2012-12-10
 *      Author: Czxck001
 */
int row = 0, col = 0;
void Input(int(*array)[105]) {
	cin >> row >> col;
	for (int i = 0; i <= row - 1; i++) {
		for (int j = 0; j <= col - 1; j++) {
			cin >> *(*(array + i) + j);
		}
	}
}
void Diagonal(int(*array)[105], int x, int y) {
	for (int i = 0;; i++) {
		if (x + i > row - 1 || y - i < 0)
			break;
		else {
			if (x == 0 && y == 0) {
				cout << **array;
			} else {
				cout << endl << *(*(array + x + i) + y - i);
			}
		}
	}
	return;
}
void Scan(int(*array)[105], int x, int y) {
	Diagonal(array, x, y);
	if (y < col - 1)
		Scan(array, x, y + 1);
	else if (x < row - 1)
		Scan(array, x + 1, y);
	else
		return;
}
int main() {
	int a[105][105];
	Input(a);
	Scan(a, 0, 0);
}
