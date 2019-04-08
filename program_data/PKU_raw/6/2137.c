/*********************************
 *??????????????.cpp *
 *?????						 *
 *????: 2012-11-10			 *
 *?????????????		 *
 *********************************/


int main(){
	int a[110][110];
	int num, sum = 0;
	int k, m, n, i, j, l;

	cin >> k;
	for (l = 0; l < k; l++)
	{
		sum = 0;
		cin >> m >> n;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> num;
				a[i][j] = num;
			}
		}

		for (i = 0; i < n; i++)
		{
			sum = sum + a[0][i];
		}
		for (i = 1; i < m; i++)
		{
			sum = sum + a[i][n - 1];
		}
		for (i = 1; i < m; i++)
		{
			sum = sum + a[i][0];
		}
		for (i = 1; i < n - 1; i++)
		{
			sum = sum + a[m - 1][i];
		}
		cout << sum << endl;
	}
	return 0;
}