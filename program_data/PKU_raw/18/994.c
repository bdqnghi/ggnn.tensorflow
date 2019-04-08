int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int ii = 0; ii < n; ii++)
	{
		sum = 0;
		int a[100][100];
		for (int i2 = 0; i2 < n; i2++)
			for (int i3 = 0; i3 < n; i3++)
				cin >> a[i2][i3];
		//
		for (int i = 1; i < n; i++)
		{
			int min1;
			for (int j = i; j < n; j++)
			{
				min1 = 100000;
				for (int j2 = i;j2 < n; j2++)
					min1 = min(min1,a[j][j2]);
				min1 = min(min1,a[j][0]);
				for (int j2 = 0; j2 < n; j2++)
					a[j][j2] -= min1;
			}
			min1 = 100000;
			for (int j = i; j < n; j++)
				min1 = min(min1,a[0][j]);
			min1 = min(min1,a[0][0]);
			for (int j2 = 0; j2 < n; j2++)
				a[0][j2] -= min1;


			for (int j = i; j < n; j++)
			{
				min1 = 100000;
				for (int j2 = i;j2 < n; j2++)
					min1 = min(min1,a[j2][j]);
				min1 = min(min1,a[0][j]);
				for (int j2 = 0; j2 < n; j2++)
					a[j2][j] -= min1;
			}
			min1 = 100000;
			for (int j = i; j < n; j++)
				min1 = min(min1,a[j][0]);
			min1 = min(min1,a[0][0]);
			for (int j2 = 0; j2 < n; j2++)
				a[j2][0] -= min1;

			sum += a[i][i];
		}
		cout << sum << endl;
	}
}













