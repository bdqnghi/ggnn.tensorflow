int main ()
{
	int A , B , C , D , E , i , j , k , l , m ;
	for ( i = 1 ; i <= 5 ; i++ )
	{
		A = i ;
		for ( j = 1 ; j <= 5 ; j++ )
		{
			if (j == i) continue ;
			else B = j ;
			for ( k = 1 ; k <= 5; k ++ )
			{
				if ( ( k == i ) || ( k == j ) ) continue ;
				else C = k ;
				for ( l = 1 ; l <= 5 ; l++ )
				{
					if ( ( l == i ) || ( l == j ) || ( l == k ) ) continue ;
					else D = l ;
					for ( m = 1 ; m <= 5 ; m++ )
					{
						if ( ( m == i ) || ( m == j ) || ( m == k ) || ( m == l ) ) continue ;
						else E = m ;
						if ((((A == 2) && (E == 1)) + (B == 2) + (((C == 1) || (C == 2)) && (A == 5)) + (((E == 1)||(E == 2)) && (D == 1) )== 2 ) && (E != 2) && (E != 3))
							cout << A <<' ' << B << ' ' << C << ' ' << D << ' ' << E << endl;
					}
				}
			}
		}
	}
	return 0 ;
}
