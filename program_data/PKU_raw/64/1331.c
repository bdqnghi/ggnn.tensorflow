
int main() {
	int n, j, i, k = 0, m;
	float p = 0, a[100] = { 0 };
	int x[10], y[10], z[10];
	float s[10][10] = { 0 };
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i] >> z[i];
	for (i = 0; i < n; i++) {//????
		for (j = i + 1; j < n; j++) {
			a[k++] = s[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j])
					* (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
		}
	}
	for (i = 0; i < k - 1; i++) {//??
		for (j = 0; j < k - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				p = a[j];
				a[j] = a[j + 1];
				a[j + 1] = p;
			}
		}
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			if (a[0] == s[i][j])
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], y[i], z[i], x[j],
						y[j], z[j], sqrt(a[0]));
		}
	}
	for (m = 1; m < k; m++) {
		for (j = 0; j < n; j++) {
			for (i = 0; i < n; i++) {
				if (a[m] == s[i][j] && a[m] != a[m - 1])
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], y[i], z[i],
							x[j], y[j], z[j], sqrt(a[m]));
			}
		}
	}
	return 0;
}