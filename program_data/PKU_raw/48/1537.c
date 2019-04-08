

int main()
{
	const int n = 9;
    int init, days, m[2][n+2][n+2] = {0};
    cin >> init >> days;
    m[0][5][5] = init;
    for (int k = 0; k < days; k++) {
		for (int i = 0; i <= n + 1; i++)
			for (int j = 0; j <= n + 1; j++)
				m[1-k%2][i][j] = 0;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (m[k%2][i][j]) {
					m[1-k%2][i+1][j+1] += m[k%2][i][j];
					m[1-k%2][i+1][j] += m[k%2][i][j];
					m[1-k%2][i+1][j-1] += m[k%2][i][j];
					m[1-k%2][i][j+1] += m[k%2][i][j];
					m[1-k%2][i][j-1] += m[k%2][i][j];
					m[1-k%2][i-1][j+1] += m[k%2][i][j];
					m[1-k%2][i-1][j] += m[k%2][i][j];
					m[1-k%2][i-1][j-1] += m[k%2][i][j];
					m[1-k%2][i][j] += m[k%2][i][j] * 2;
				}
    }
    for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cout << m[days%2][i][j];
			if (j == n) cout << endl;
			else cout << ' ';
		}
    return 0;
}
