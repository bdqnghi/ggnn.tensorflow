
int main()
{
	int x, y, a[23][23]={0}, i, j ;
	cin >> x >> y ;
	for (i = 1 ; i < x+1 ; i++)
	{
		for (j = 1 ; j < y+1 ; j++)
		{
			cin >> a[i][j] ;
		}
	}
	for (i = 1 ; i < x +1 ; i++)
	{
		for (j = 1 ; j < y+1 ; j++)
		{
			if (a[i+1][j] <= a[i][j] && a[i-1][j] <= a[i][j] && a[i][j+1] <= a[i][j] && a[i][j-1] <= a[i][j])
			{
				cout << i-1 << ' ' << j-1 << endl ;
			}
		}
	}
	
	return 0 ;
}

