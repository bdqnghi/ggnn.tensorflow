int main()
{
	int n,i,e,k = 0;
	int s[20001];
	int a[20001];
	cin >> n;
	for (i = 1;i <= 20001; i++)
	{
		s[i] = 0;
		a[i] = 0;
	}
	for (i = 1;i <= n;i++)
	{
		cin >> e;
		if (a[e] == 0)
		{
			a[e] = 1;
			k ++;
			s[k] = e;
		}
	}
	for (i = 1;i <= k-1;i++)
     	cout << s[i] << ' ';
	cout << s[k];
	return 0;
}

