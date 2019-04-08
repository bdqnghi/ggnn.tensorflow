int main ()
{
	int n, i, j, flag[300],t, m;
	float ave, sum = 0.0, max = 0.0, c[300];
	int a[300];
	cin >> n;
	for (i=0; i<n;i++)
	{
		cin >> a[i];
		sum = sum +a[i];
	}
	ave = sum / n;
	for ( i = 0;i < n; i++)
	{
		c[i] = fabs(a[i] - ave);
		if ((c[i] - max) > 1e-6)
		{
			max = c[i];
			flag[0] = i;
		}
	}
	j = 0;
	for ( i = 0; i< n; i++)
	{
		if (fabs(c[i] - max) < 1e-6)
		{
			flag[j] = i;
			j++;
		}
	}
	for ( i = 0; i< j-1;i++)
		for ( m = 0; m < j-1-i;m++)
			if ( flag[m] >flag[m+1])
			{
				t = flag[m];
				flag[m] = flag[m+1];
				flag[m+1] = t;
			}
	for ( i = 0;i< j - 1;i++)
		cout << a[flag[i]] << ",";
	cout << a[flag[j-1]] << endl;
	return 0;
}