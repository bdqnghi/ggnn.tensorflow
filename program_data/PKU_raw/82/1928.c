int main()
{
	int n, a, b, i, k=0,m=0;
	cin >> n;

	for ( i=1; i <= n; i++)
	{
		cin >> a >> b;

		if (a >= 90 && a <= 140 && b >=60 && b <=90)
		{
			k+=1;
		}
		else
		{
			m=(m > k) ? m : k ;
			k=0;
		}
	}
	m=(m > k) ? m : k ;
	cout << m << endl;

	return 0;
}