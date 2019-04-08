int apple (int m, int n)
{
	int sum=0, sum1=0, sum2=0;
	if (n == 1)
	{
		sum = 1;
		return sum;
	}
	if (m == 1)
	{
		sum = 1;
		return sum;
	}
	if (n!=1&&m!=1)
	{	
		if (m<=n)
			return (1+ apple (m,m-1));
		else
		{
			sum2= apple (m-n,n);
			sum1 = apple (m, n - 1);
		}
	}
	sum=sum1+sum2;
	return sum;
}
int main()
{
	int t, i, m, n, total;
	cin >> t;
	for (i=1;i<=t;i++)
	{
		cin >> m >> n;
		cout << apple(m, n) << endl;
	}
	return 0;
}
