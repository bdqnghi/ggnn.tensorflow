
int f[30];
int a[30];
int k;

int main()
{
	int i,j;
	cin >> k;
	for (i = 0;i < k;i ++)
	{
		cin >> a[i];
		f[i] = 1;
	}
	for (i = 1;i < k;i ++)
	{
		for (j = 0;j < i;j ++)
		{
			if (a[j] >= a[i])
			{
				if (f[j] + 1 > f[i])
				{
					f[i] = f[j] + 1;
				}
			}
		}
	}
	j = f[0];
	for (i = 1;i < k;i ++)
	{
		if (f[i] > j) j = f[i];
	}
	cout << j << endl;
	return 0;
}