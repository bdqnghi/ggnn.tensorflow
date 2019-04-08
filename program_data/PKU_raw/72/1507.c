/*
 * ????
 * Created on: 2013-1-13
 * ??
 * Author: ???
 */
int main() {
	int r = 0, c = 0;
	cin >> r >> c;
	int mountain[r + 2][c + 2];
	for (int i = 0; i < r + 2; i++)
		for (int j = 0; j < c + 2; j++) {
			if (i == 0 || j == 0 || i == r + 1 || j == c + 1)
				mountain[i][j] = 0;
			else
				cin >> mountain[i][j];
		}
	for (int i = 1; i < r + 1; i++)
		for (int j = 1; j < c + 1; j++) {
			if ((mountain[i][j] >= mountain[i - 1][j]) && (mountain[i][j]
					>= mountain[i + 1][j]) && (mountain[i][j] >= mountain[i][j
					- 1]) && (mountain[i][j] >= mountain[i][j + 1]))
			cout << i-1 << " " << j-1 << endl;
		}
	return 0;
}
