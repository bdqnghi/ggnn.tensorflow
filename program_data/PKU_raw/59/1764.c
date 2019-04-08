int main()
{
	char a[102][102] , b [102][102];
	int n , m , i , j , k ;
	cin >> n ;
	for (i = 1 ; i <= n ; i ++)
	{
		for (j = 1 ; j <= n ; j ++)
		{
			cin >> a[i][j] ;
		}
	}
	cin >> m ;
	for (i = 1 ; i <= n ; i ++)
	{
		for (j = 1 ; j <= n ; j ++)
		{
			b[i][j] = a[i][j] ;
		}
	}
	for ( ; m > 1 ; m --)
	{
		for (i = 1 ; i <= n ; i ++)
		{
			for (j = 1 ; j <= n ; j ++)
			{
				if(a[i][j] == '@')
				{
					if(a[i - 1][j] == '.')
						b[i - 1][j] = '@';
					if(a[i + 1][j] == '.')
						b[i + 1][j] = '@';
					if(a[i][j - 1] == '.')
						b[i][j - 1] = '@';
					if(a[i][j + 1] == '.')
						b[i][j + 1] = '@';
				}
			}
		}
		for (i = 1 ; i <= n ; i ++)
		{
			for (j = 1 ; j <= n ; j ++)
			{
				a[i][j] = b[i][j];
			}
		}
	}
	k = 0 ;
	for (i = 1 ; i <= n ; i ++)
	{
		for (j = 1 ; j <= n ; j ++)
		{
			if(a[i][j] == '@')
				k ++;
		}
	}
	cout << k << endl;
	return 0 ;
}