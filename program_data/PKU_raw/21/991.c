int main() {
	int s = 0, a[310] = { 0 }, b[310] = { 0 }, t = 0;
	int n, k = 0, max = -10000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s = s + a[i];
	}
	for (int i = 0; i < n; i++) {
		if (abs(s - n * a[i]) > max) {
			max = abs(s - n * a[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (abs(s - n * a[i]) == max)
			b[k++] = a[i];
	}
	for (int i = 0; i < k; i++) {
		for (int j = i + 1; j < k; j++) {
			if (b[i] > b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		cout << b[i];
		if (i != k - 1)
			cout << ',';
	}
	return 0;
}