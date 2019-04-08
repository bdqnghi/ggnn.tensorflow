/*
 * ????shanchuyuansu.cpp
 * ?????????k????????????????????
 * ????: 2012-11-9
 * ??: ? ?
 */



int main()
{
	int n = 0;
	cin >> n;
	int a[n];
	int k = 0, i = 0, j = 0;
	int x = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (i = 0; i < n; i++)
	{
		if ( a[i] == k )
		{
			for (j = i; j < (n-1); j++)
			{
				a[j] = a[j+1];
			}
			a[j] = -1234;
			i--;
		}
	}
	for ( i = 0; i < n; i++ )
	{
	 	if (a[i] != -1234)
	 	{
	 		if ( x == 1 ) cout << " ";
	 		x = 1;
	 		cout << a[i];
	 	}
	}
	cout << endl;
	return 0;
}
