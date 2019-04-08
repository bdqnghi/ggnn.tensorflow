int main() {
	char a[501] = "0";//??????
	int r, i, j, k, m;
	cin >> a;
	for (i = 0; a[i]; i++) {
	}
	r = i;
	for (i = 2; i <= r; i++) {
		if (i % 2 == 0) {
			for (j = i / 2 - 1; j <= r - i / 2; j++) {
				for (k = 1; k <= i / 2; k++) {
					if (a[j - k + 1] != a[j + k])//???????
					{
						break;
					} else
						continue;
				}
				if (k == i / 2 + 1) {
					for (m = -i / 2 + 1; m <= i / 2; m++)
						cout << a[j + m];
					cout << endl;
				}
			}
		}//??????
		if (i % 2 == 1) {
			for (j = i / 2; j < r - i / 2; j++) {
				for (k = 1; k <= i / 2; k++) {
					if (a[j - k] != a[j + k]) {
						break;
					} else
						continue;
				}
				if (k == i / 2 + 1) {
					for (m = -i / 2; m <= i / 2; m++)
						cout << a[j + m];
					cout << endl;
				}//??????
			}
		}
	}
	return 0;
}
