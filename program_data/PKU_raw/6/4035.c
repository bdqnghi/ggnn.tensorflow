
const int M = 100 + 10;
const int N = 100 + 10;
int mat[M][N];
int main(void) {
	int cases, i, j, ans, m, n;
	scanf("%d", &cases);
	while (cases--) {
		ans = 0;
		scanf("%d%d", &m, &n);
		for (i = 0; i < m; ++i) {
			for (j = 0; j < n; ++j) {
				scanf("%d", mat[i] + j);
			}
		}
		if (m == 0 || n == 0) {
			printf("%d\n", 0);
			continue;
		}
		if (m == 1) {
			for (i = 0; i < n; ++i) {
				ans += mat[0][i];
			}
			printf("%d\n", ans);
			continue;
		} else if (n == 1) {
			for (i = 0; i < m; ++i) {
				ans += mat[i][0];
			}
			printf("%d\n", ans);
			continue;
		}

		for (i = 0; i < n; ++i) {
			ans += mat[0][i];
			ans += mat[m - 1][i];
		}
		for (i = 0; i < m; ++i) {
			ans += mat[i][0];
			ans += mat[i][n - 1];
		}
		ans -= (mat[0][0] + mat[0][n - 1] + mat[m - 1][0] + mat[m - 1][n - 1]);
		printf("%d\n", ans);
	}
	return 0;
}