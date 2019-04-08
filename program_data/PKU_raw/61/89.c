int main()
{
	int n, i, j, a[100], b[21] = {0, 1, 1};
	cin>>n;
	for (i = 0; i < n; i++)
	{
		cin>>a[i];
		if (a[i] == 1 || a[i] == 2)
			cout<<1<<endl;
		else
		{
			for (j = 3; j <= a[i]; j++)
			{
				b[j] = b[j - 1] + b[j - 2];
			}
			cout<<b[j - 1]<<endl;
		}
	}
	return 0;
}

