int main()
{
	int x1 , y1 , x2 , y2 , num , ans;
	int a[100][100] , b[100][100] , c[100][100];
	cin >> x1 >> y1;
	for ( int i = 0 ; i <= x1 - 1; i ++ )
	{
		for ( int j = 0 ; j <= y1 - 1 ; j ++ )
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
    for ( int k = 0 ; k <= x2 - 1; k ++ )
	{
		for ( int l = 0 ; l <= y2 - 1 ; l ++ )
		{
			cin >> b[k][l];
		}
	}
	for ( int p = 0 ; p <= x1 - 1 ; p ++ )
	{
		for ( int q = 0 ; q <= y2 - 1 ; q ++ )
		{
			num = 0;
			for ( int t = 0 ; t <= y1 - 1 ; t ++ )
			{
				ans = a[p][t] * b[t][q];
				num = num + ans;
			}
			c[p][q] = num;
		}
	}
	for ( int m = 0 ; m <= x1 - 1 ; m ++ )
	{
		for ( int n = 0 ; n <= y2 - 1 ; n ++ )
		{
			if ( n != y2 - 1 )
			{
			  cout << c[m][n] << " ";
			}
			if ( n == y2 - 1 )
			{
				cout << c[m][n];
			}
		}
		cout << endl;
	}
	return 0;
}


