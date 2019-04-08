int main()
{
	int a[100000] = {0}, i, b, c, n, d[100000] = {0}, f = 0, *p = a, *q = d;
	cin >> n;
	while(cin >> b >> c)
	{
		if ((b == 0) && (c == 0))
			break;
		(*(p + b))++;
		(*(q + c))++;
	}
	for (i = 0; i <= n-1; i++)
	{
		if ((a[i] == 0) && (d[i] == n - 1))
		{
			f = 1;
			cout << i;
		}
	}
	if (f == 0)
		cout << "NOT FOUND" ;
	return 0;
}