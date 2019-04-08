void liu(int, int);
char a[100][100] = { 0 };
int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cin >> m;
	liu(n, m);
	return 0;
}
void liu(int n, int m) {
	int s = 0;
	int t[100][100] = { 0 };
	if (m >1) {
		for (int i = 0; i < n; i++) {//??
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '@')
					t[i][j] = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '@' && t[i][j] == 1) {//??
					if (j < n - 1 && a[i][j + 1] == '.')
						a[i][j + 1] = '@';
					if (j > 0 && a[i][j - 1] == '.')
						a[i][j - 1] = '@';
					if (i < n - 1 && a[i + 1][j] == '.')
						a[i + 1][j] = '@';
					if (i > 0 && a[i - 1][j] == '.')
						a[i - 1][j] = '@';
				}
			}
		}
     liu (n,m-1);//??
	}

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '@')
					s++;
			}
		}
		cout << s;
	}
}
