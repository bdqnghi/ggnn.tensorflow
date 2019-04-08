/*
 * Matrix.cpp
 *
 *  Created on: 2010-12-31
 *      Author: user
 */



int matrix[100][100], sum = 0;

void SUM(int n) {
	if (n == 1)
		return;
	int i, j;

	//??
	//??
	int min;
	for (i = 0; i < n; i++) {
		min = matrix[i][0];
		for (j = 0; j < n; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}

		for (j = 0; j < n; j++) {
			matrix[i][j] -= min;
		}
	}
	//??
	for (j = 0; j < n; j++) {
		min = matrix[0][j];
		for (i = 0; i < n; i++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}

		for (i = 0; i < n; i++) {
			matrix[i][j] -= min;
		}
	}

	sum += matrix[1][1];

	//???
	for (j = 1; j < n - 1; j++)
		matrix[0][j] = matrix[0][j + 1];

	for (i = 1; i < n - 1; i++)
		matrix[i][0] = matrix[i + 1][0];

	for (i = 1; i < n - 1; i++) {
		for (j = 1; j < n - 1; j++) {
			matrix[i][j] = matrix[i + 1][j + 1];
		}
	}

	SUM(n - 1);

}

int main() {
	int n, i, j, k;
	cin >> n;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				cin >> matrix[j][k];

		SUM(n);
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
