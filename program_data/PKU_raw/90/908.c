int baifang(int n, int m);
int main()
{
	int t, m, n, i;
	cin >> t;
	for(i = 1; i <= t; i++)
	{
		cin >> m >> n;
		cout << baifang(n, m) << endl;
	}
	return 0;
}
int baifang(int n,int m)
{
	if(m == 0)
	{
		return 1;
	}
	if(n == 1)
	{
		return 1;
	}
	if(m < n)
	{
		return (baifang(n - 1, m));
	}
	else
	{
		return (baifang(n - 1, m) + baifang(n, m - n));
	}
}