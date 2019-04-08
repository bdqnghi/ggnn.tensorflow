int main()
{
	int a[21] = {0}, n, i, m;
	cin >> n;
	a[1] = 1;
	a[2] = 1;
	while(n--)
	{
		cin >> m;
		if(m == 1 || m == 2)
			cout << 1 << endl;
		else
		{
			for(i = 3; i <= m; i++)
				a[i] = a[i - 1] + a[i - 2];
			cout << a[m] << endl;
		}
	}
	return 0;
}