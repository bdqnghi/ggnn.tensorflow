void duqu();
void paixu();
void hebin();
void xianshi();
int a[100], b[100], c[200];
int m, n;
int main() {
	duqu();
	paixu();
	hebin();
	xianshi();
	return 0;
}
void duqu() {

	cin >> m >> n;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
}
void paixu() {
	int i = 0, j = 0, t;
	for (i = 0; i < m; i++) {
		for (j = i + 1; j < m; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
}
void hebin() {

	for (int i = 0; i < m; i++)
		c[i] = a[i];
	for (int i = m; i < n + m; i++)
		c[i] = b[i - m];
}
void xianshi() {
	for (int i = 0; i < m + n - 1; i++)
		cout << c[i] << ' ';
	cout << c[m + n - 1];

}