int main()
{
	int N, i, j;
	int k;
	cin >> N;
	int a[400] = {0};
	a[399] = 1;
	for( i = 0; i < N; i++ )
	{
		for( j = 0; j < 400; j++ )
		{
			a[j] = a[j] * 2;
		}
		for( k = 399; k >= 0; k-- )
		{
			if( a[k] >= 10 )
			{
				a[k] = a[k] - 10;
				a[k-1] += 1;
			}
		}
	}
	for( i = 0; i < 400; i++ )
	{
		if( a[i] != 0 )
		  break;
	}
	for( j = i; j < 400; j++ )
	{
		cout << a[j];
	}
	cout << endl;
	return 0;
}