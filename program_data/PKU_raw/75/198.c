int main()
{
	int i;
	int a[1001], b[1001];
	for( i = 1; ; i++)
	{
		cin >> a[i];
		char ch = cin.get();
		if( ch != ',' )
			break;
	}
	for( i = 1; ; i++)
	{
		cin >> b[i];
		char ch = cin.get();
		if( ch != ',' )
			break;
	}
	int t = i;
	cout << t << " ";
	int c[1001] = {0}, max = 0;
	for(int i = 0; i < 1000; i++)
	{
		for(int j = 1; j <= t; j++)
		{
			if( i >= a[j] && i < b[j] )
				c[i] ++;
		}
		if( c[i] > max )
			max = c[i];
	}
	cout << max << endl;
	return 0;
}
