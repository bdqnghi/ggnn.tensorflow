int main()
{
	int i, j, t, k, n, m=0;
	int flag = 1;
	char str[500];
	char *p;
	int a[500] = {0};
	cin >> n;
	cin >> str;
	k = strlen(str);
	for ( i = 0 ; i < k - n ; i++ )
	{
		for ( t = 0 ; t <= k - i - n  ; t++ )
		{
			for ( j = i ; j < n + i ; j++ )
			{
				if ( str[j] != str[j+t] )
				{
					flag = 0;
					break;
				}
			}
			if ( flag == 1 )
				a[i]++;
			flag = 1;
		}
	}
	for ( i = 0 ; i < k - n ; i++ )
	{
		if ( a[i] > m )
			m = a[i];
	}
	if ( m == 1 )
		cout << "NO" << endl;
	else
	{
		cout << m << endl;
		for ( i = 0 ; i < k - n ; i++ )
		{
			if ( a[i] == m )
			{
				p = &str[i-1];
				for (j = i ; j < i + n ; j++ )
					cout << *++p;
				cout << endl;
			}
		}
	}
	cin>>n;
	return 0;
}
