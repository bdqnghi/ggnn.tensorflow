int main()
{
	int a[30][30] = {0}, i , j, m, n,flag;
	cin >> m >> n;
	for (i = 0;i<m;i++)
		for (j=0;j<n;j++)
		cin >>a[i][j];
	for (i = 0;i<m;i++)
		for (j=0;j<n;j++)
		{
			flag = 1;
			if (j > 0)
				if (a[i][j-1] > a[i][j])
				{
					flag =0;
					continue;
				}
			if (j <n-1)
				if (a[i][j]<a[i][j+1])
				{
					flag =0;
					continue;
			
				}
			if (i > 0)
				if (a[i-1][j] > a[i][j])
				{
					flag =0;
					continue;
				
				}
			if (i< m-1)
			{
				if (a[i][j] < a[i+1][j])
				{
					flag =0;
					continue;

				}
			}
			if (flag ==1)
				cout << i << " "<<j<< endl;
		}

	return 0;
}