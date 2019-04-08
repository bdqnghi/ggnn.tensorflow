int x[3000], y[3000], n, count, ans;

void sort(int *x) {
	int i, j, k;
	for (i = 1; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			if (x[i] < x[j]) {
					k = x[i];
					x[i] = x[j];
					x[j] = k;
			}
	for (i = 1; i <= n; i++)
		x[i + n] = x[i];
}

int main() {
	int i, j;
while (1) {
	scanf("%d", &n);
	if (n == 0) break;
	for (i = 1; i <= n; i++) scanf("%d", x + i);
	for (i = 1; i <= n; i++) scanf("%d", y + i);
	sort(x);
	sort(y);
	ans = -n * 200;
	for (i = 0; i < n; i++) {
		count = 0;
		for (j = 1; j <= n; j++)
			if (x[j] > y[i + j]) count += 200;
			else
			if (x[j] < y[i + j]) count -= 200;
		if (count > ans) ans = count;
	}
	printf("%d\n", ans);
}
}
