int a[100][100];
int row, col;
int main() {
	cin >> row >> col;
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			cin >> *(*(a + i) + j);
	for (int i = 2; i <= row + col; i++)
		for (int j = max(1, i - col); j <= min(row, i - 1); j++)
			cout << *(*(a + j) + i - j) << endl;
	return 0;
}
