/*
 * 6.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */

int main()
{
	int n, i, j, k;
	cin >> n;
	int input[n][n];

	int time;
	for (time = 1; time <= n; time++) {
		int (*p)[n] = input;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cin >> *(*(p + i) + j);
			}
		}

		int min, N = n, sum = 0;

		for (k = 1; k <= n - 1; k++) {
			for (i = 0; i < N; i++) {
				min = 10000;
				for (j = 0; j < N; j++) {
					if (*(*(p + i) + j) < min) min = *(*(p + i) + j);
				}

				for (j = 0; j < N; j++) {
					*(*(p + i) + j) = *(*(p + i) + j) - min;
				}
			}

			for (j = 0; j < N; j++) {
				min = 10000;
				for (i = 0; i < N; i++) {
					if (*(*(p + i) + j) < min) min = *(*(p + i) + j);
				}

				for (i = 0; i < N; i++) {
					*(*(p + i) + j) = *(*(p + i) + j) - min;
				}
			}
			sum = sum + *(*(p + 1) + 1);

			for (i = 1; i < N - 1; i++) {
				for (j = 0; j < N; j++) {
					*(*(p + i) + j) = *(*(p + i + 1) + j);
				}
			}

			for (j = 1; j < N - 1; j++) {
				for (i = 0; i < N; i++) {
					*(*(p + i) + j) = *(*(p + i) + j + 1);
				}
			}
			N--;
		}
		cout << sum << endl;
	}
	return 0;
}
