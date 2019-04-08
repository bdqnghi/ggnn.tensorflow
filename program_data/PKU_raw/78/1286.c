int main()
{
	int weight;
	char name[4] = { 'z' , 'q' , 's' , 'l' };
	for ( int i = 1 ; i <= 5 ; i ++ )
	{
		for ( int j = 1 ; j <= 5 ; j ++ )
		{
			if ( j == i ) continue;
			for ( int k = 1 ; k <= 5 ; k ++ )
			{
				if ( k == i || k == j ) continue;
				for ( int l = 1 ; l <= 5 ; l ++ )
				{
					if ( l == i || l == j || l == k ) continue;
					if ( ( i + j ) == ( k + l ) && ( i + l ) > ( j + k ) && ( i + k ) < j )
					{
						for ( int m = 5 ; m >= 1 ; m -- )
						{
							if ( i == m )
								cout << "z " << 10 * m << endl;
							if ( j == m )
								cout << "q " << 10 * m << endl;
                            if ( k == m )
								cout << "s " << 10 * m << endl;
                            if ( l == m )
								cout << "l " << 10 * m << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}