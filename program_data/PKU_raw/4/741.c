int main() {
	int row, col;
	int a[100][100] = { 0 };
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> *(*(a + i) + j);
		}
	}
	for (int s = 0; s < row + col - 1; s++) {//s???????
		for (int i = 0; i < row; i++) {//i???
			if (s - i >= 0 && s - i < col)
				cout << *(*(a + i) + s - i) << endl;
		}

	}
	return 0;
}
