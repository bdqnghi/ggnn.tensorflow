int waye(int m, int n)
{
	if(m == 0 || m == 1 || n == 1) return 1;
	if(m >= n)
		return (waye(m - n, n) + waye(m, n - 1));
	if(m < n) return (waye(m, n - 1));
}

int main()
{
	int t, m,n;
	cin >> t;
	for(; t > 0; t--)
	{
		cin >> m >> n;
	    cout << waye(m, n) << endl;
	}
	return 0;
}