int main()
{
	int n ;
	cin >> n ;
	int i ;
	for (i = 0 ; i < n ; i++)   //?n??????
	{
		int j , k , l , x , a[100][100] , c[100][100] , temp ;   //j,k?????c[][]????a[][]????????
		for (j = 0 ; j < n ; j++)
			for (k = 0 ; k < n ; k++)
				cin >> a[j][k] ;
		int sum = 0 ;
		for (l = n - 1 ; l >= 1 ; l--)
		{
			for (j = 0 ; j <= l ; j++)
				for (k = 0 ; k <= l ; k++)
					c[j][k] = a[j][k] ;   //c[][]????a[][]
			for (j = 0 ; j <= l ; j++)
				for (x = 0 ; x <= l - 1 ; x++)
					for (k = 0 ; k <= l - 1 - x ; k++)  //?????????????c[j][0]
					{
						if (c[j][k] > c[j][k+1])
						{
							temp = c[j][k] ;
							c[j][k] = c[j][k+1] ;
							c[j][k+1] = temp ;
						}
					}
			for (j = 0 ; j <= l ; j++)
				for (k = 0 ; k <= l ; k++)
					a[j][k] -= c[j][0] ;   //???????
			for (j = 0 ; j <= l ; j++)
				for (k = 0 ; k <= l ; k++)
					c[j][k] = a[j][k] ;
			for (k = 0 ; k <= l ; k++)         //????????
				for (x = 0 ; x <= l - 1 ; x++)
					for (j = 0 ; j <= l - 1 - x ; j++)
					{
						if (c[j][k] > c[j+1][k])
							{
								temp = c[j][k] ;
								c[j][k] = c[j+1][k] ;
								c[j+1][k] = temp ;
							}
					}
			for (j = 0 ; j <= l ; j++)
				for (k = 0 ; k <= l ; k++)
					a[j][k] -= c[0][k] ;
			sum += a[1][1] ;        //???????a[1][1]
			for (j = 2 ; j <= l ; j++)
				for (k = 2 ; k <= l ; k++)
					a[j-1][k-1] = a[j][k] ;
			for (k = 2 ; k <= l ; k++)
				a[0][k-1] = a[0][k] ;
			for (j = 2 ; j <= l ; j++)
				a[j-1][0] = a[j][0] ;  //???????2??2?,???????
		}
		cout << sum << endl ;
	}
	return 0 ;
}