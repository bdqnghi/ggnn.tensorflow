//???2010?11?24?
//???1000010586_???
//???????

int main()
{
	int n , i , j , k ;
	int m , stu[20];
	cin >> n;
	for ( i = 0 ; i <= n - 1 ; i ++ )
	{
		cin >> m;
		if ( m == 0 )
		{
			cout << 60 << endl;
			continue;
		}
		for ( k = 0 ; k <= m - 1 ; k ++ )
			cin >> stu[k];
		for ( j = 0 ; j <= m - 1 ; j ++ )
		{
			if ( stu[j] + 3 * j > 60 )
				break;
		}
		if ( stu[j - 1] + 3 * j > 60 )
			cout << stu[j - 1] << endl;
		else
			cout << 60 - 3 * j << endl;
	}
	return 0;
}
	
