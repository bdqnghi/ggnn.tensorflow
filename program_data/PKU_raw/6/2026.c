int main() {
	int n, i, j, k;
	int line, row, sum;
	int array[200][200];
	cin >> n;//?????????
	for (i = 1; i <= n; i++) {
		cin >> line >> row;
		for (j = 0; j < line; j++)
			for (k = 0; k < row; k++)
				cin >> array[j][k];//????
		sum = 0;
		if (row == 1 || line == 1) {//?????????????
			for (j = 0; j < line; j++)
				for (k = 0; k < row; k++)
					sum = sum + array[j][k];//???????????????????
			cout << sum << endl;
		} else {
			sum = 0 - array[0][0] - array[0][row - 1] - array[line - 1][0]
					- array[line - 1][row - 1];//????????
			for (j = 0; j < line; j++)
				sum = sum + array[j][0] + array[j][row - 1];
			for (j = 0; j < row; j++)
				sum = sum + array[0][j] + array[line - 1][j];//????????????
			cout << sum << endl;
		}
	}
	return 0;
}
