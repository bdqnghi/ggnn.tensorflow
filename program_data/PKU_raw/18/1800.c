int a[101][101], n;
int rowmin(int i)
{
	int minr = INT_MAX;
	for(int i1 = 0; i1 < n; i1++)
	{
		if(a[i][i1] < minr && a[i][i1] >= 0)
		{minr = a[i][i1];}
	}
	return minr;
}
int colmin(int i)
{
	int minc = INT_MAX;
	for(int i1 = 0; i1 < n; i1++)
	{
		if(a[i1][i] < minc && a[i1][i] >= 0)
		{minc = a[i1][i];}
	}
	return minc;
}
int main()
{
	int t, k, sum, min, minc, i, j;
	cin >> n;
	for(t = 1; t <= n; t++)
	{
		k = 1;
		sum = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{cin >> a[i][j];}
		}
		while(k < n)
		{
			for(i = 0; i < n; i++)
			{
				min = rowmin(i);
				for(j = 0; j < n; j++)
				{a[i][j] -= min;}
			}
			for(i = 0; i < n; i++)
			{
				min = colmin(i);
				for(j = 0; j < n; j++)
				{a[j][i] -= min;}
			}
			sum += a[k][k];
			for(i = 0; i < n; i++)
			{a[i][k] = -1;}
			for(i = 0; i < n; i++)
			{a[k][i] = -1;}
			k++;
		}
		cout << sum << endl;
	}
	return 0;
}
