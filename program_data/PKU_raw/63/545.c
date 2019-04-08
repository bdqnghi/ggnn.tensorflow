int main() {
	int A[100][100], B[100][100], C[100][100];
	int m, q, n;
	cin >> m >> q;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			C[i][j] = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < q; j++) {
			cin >> A[i][j];
		}
	cin >> q >> n;
	for (int i = 0; i < q; i++)
		for (int j = 0; j < n; j++) {
			cin >> B[i][j];
		}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			for (int t = 0; t < q; t++) {
				C[i][j] = C[i][j] + A[i][t] * B[t][j];
			}
	for (int i = 0; i < m; i++) {
		cout << C[i][0];
		for (int j = 1; j < n; j++)
			cout << " "<< C[i][j] ;
		cout << endl;
	}

}
