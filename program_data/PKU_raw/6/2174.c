int main() {
	int k, i;
	cin >> k;
	for (i = 0; i < k; i++) {
		int m, n, s, t, sum = 0, matrix[100][100];
		cin >> m >> n;
		for (s = 0; s < m; s++) //????
			for (t = 0; t < n; t++)
				cin >> *(*(matrix + s) + t);
		for (s = 0; s < n; s++) //??????
			sum += *(*(matrix + 0) + s) + *(*(matrix + m - 1) + s);
		for (s = 1; s < m - 1; s++) //??????
			sum += *(*(matrix + s) + 0) + *(*(matrix + s) + n - 1);
		if (m == 1 || n == 1) //???????????
			sum /= 2;
		cout << sum << endl;
	}
	return 0;
}