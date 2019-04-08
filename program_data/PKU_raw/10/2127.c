
const int N = 25 + 10;
int h[N];
int dp[N];

int main(void) {
	int ans, cnt, i, j;
	while (scanf("%d", &cnt) != EOF) {
		for (i = 0; i < cnt; ++i) {
			scanf("%d", h + i);
		}
		dp[0] = 1;
		for (i = 1; i < cnt; ++i) {
			dp[i] = 1;
			for (j = 0; j < i; ++j) {
				if (h[i] <= h[j]) {
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
		}
		ans = 0;
		for (i = 0; i < cnt; ++i) {
			ans = max(ans, dp[i]);
		}
		printf("%d\n", ans);
	}

	return 0;
}