//???2010?11?17?
//???1000010586_???
//??????????????? 

int main()
{
	int t , len , k , j;
	char str[100][100001] ;
	cin >> t;
	for ( int m = 0 ; m <= t - 1 ; m ++ )
	{
		cin >> str[m];
	}
	for ( int i = 0 ; i <= t - 1 ; i ++ )
	{
		len = strlen( str[i] );
		for (  j = 0 ; j <= len - 1 ; j ++ )
		{
			for (  k = 0 ; k <= len - 1 ; k ++ )
			{
				if ( str[i][j] == str[i][k] && j != k ) break;
			}
			if ( k == len  )
			{
				cout << str[i][j] << endl;
				break;
			}
		}
		if ( j == len  )
			cout << "no" << endl;	
	}
	return 0;
}


