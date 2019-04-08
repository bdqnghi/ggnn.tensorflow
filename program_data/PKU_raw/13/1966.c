int main()
{
	int n;
	cin >> n;
	int a[20001] = { 0 };
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if ( i == 0 )
			cout << a[i];
		else
		{
			int t = 0;
			for(int j = 0; j < i; j++)
			{
				if ( a[i] == a[j] )
					t ++;
			}
			if( t == 0 )
				cout << " " << a[i];
		}
	}
	return 0;
}