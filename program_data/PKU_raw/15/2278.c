int main()
{
	int i, j, n, h1, l1, h2, l2;
	int a[1000][1000];
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] == 0)
			{
				h1 = i;
				l1 = j;
				break;
				break;
			}
		}
	}
	for(i = n - 1; i >= 0; i--)
	{
		for(j = n - 1; j >= 0; j--)
		{
			if(a[i][j] == 0)
			{
				h2 = i;
				l2 = j;
				break;
				break;
			}
		}
	}
	cout << (fabs(h2 - h1) - 1) * (fabs(l2 - l1) - 1) << endl;
	return 0;
}