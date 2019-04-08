int main()
{
	int A[5], B[5], a[5][5], i, j, k, m, n = 0;
	for (i = 0; i <= 4; i ++)
		for (j = 0; j <= 4; j ++)
			cin >> a[i][j];

	for (i = 0; i <= 4; i ++)
	{
		A[i] = a[i][0];
		for (j = 0; j <= 4; j ++)
			if (a[i][j] >= A[i])
			{
				A[i] = a[i][j];
				m = j;
			}

		B[m] = a[0][m];
		for (k = 0; k<= 4; k ++)
			if (a[k][m] <= B[m])
				B[m] = a[k][m];
		if (A[i] == B[m])
			{
				n ++;
				cout << i + 1 << " " << m + 1 << " " << a[i][m] << endl;
			}
	}
	if (n == 0)
		cout << "not found" << endl;
	return 0;
}