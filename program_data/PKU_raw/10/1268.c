int main()
{
	int n, a[100],b[100];
	cin >> n;
	for ( int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = 1;
	}
	
	for ( int i = n-1; i > 0; i--)
	{
		for ( int j = i - 1; j >= 0; j--)
		{
			if ( a[j] >= a[i] && b[j] < b[i]+1)
			{
				b[j] = b[i] + 1;
			}
		}
	}
	for ( int i = 0; i < n; i++)
	{
		if ( b[0] < b[i] )
			b[0] = b[i];
	}
	cout << b[0] << endl;
	return 0;
}


	