/**
* @file 1.cpp
* @author ???
* @date 2011-10-26
* @description
* ??????:?????????
*/
int main()
{
	int a[100][100], j, i, l, p, q;
	int k, m, n, sum;
	cin >> k;
	for (i = 0; i <k; i++)
	{
		sum = 0;
		cin >> m >> n;
		for (j = 1; j <= m; j++)
		{
			for (l = 1; l <= n; l++)
				cin >> a[j][l];
		}
		for (p = 1; p <= n; p++)
		{
			sum = sum + a[1][p] + a[m][p];
		}
		for(q = 2; q < m; q++)
		{
			sum = sum + a[q][1] + a[q][n];
		}
		cout << sum << endl;
	}
	return 0;
}