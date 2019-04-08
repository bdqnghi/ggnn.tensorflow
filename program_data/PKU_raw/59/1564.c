//****************************
//**Title:????          **
//**Author:?? 1300012732  **
//**Date?2013.11.01        **
//**File?5.cpp             **
//****************************

int main()
{
	char a[100][100],b[100][100];
	int n, i, j, k, m, p, q;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			b[i][j] = a[i][j];
	cin >> m;
	for (k = 2; k <= m; k++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (a[i][j] == '@' && a[i - 1][j] == '.' && i - 1 >= 0)
					b[i - 1][j] = '@';
			    if (a[i][j] == '@' && a[i + 1][j] == '.' && i + 1 < n)
					b[i + 1][j] = '@';
				if (a[i][j] == '@' && a[i][j + 1] == '.' && j + 1 < n)
					b[i][j + 1] = '@';
				if (a[i][j] == '@' && a[i][j - 1] == '.' && j - 1 >= 0)
					b[i][j - 1] = '@';
            }
        for (p = 0; p < n; p++)
		    for (q = 0; q < n; q++)
				a[p][q] = b[p][q];
	}
	int cnt = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cnt += (a[i][j] == '@');
	cout << cnt << endl;
	return 0;
}