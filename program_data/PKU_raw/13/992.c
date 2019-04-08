int main ()
{
	int n,i,j;
	int a[20000],flag[20000] = {0};
	cin >> n;
	for (i = 0;i < n;i++)
		cin >> a[i];
	cout << a[0];
	for (i = 1;i < n;i++)
	{
		for (j = 0;j < i;j++)
		{
			if (a[i] == a[j])
				flag[i] = 1;
		}
		if (flag[i] == 0)
			cout << " " << a[i];
	}
	return 0;
}