int main()
{
	int n, i, j, k, p, q, a, b, c;
	cin >> n;
	for ( k = 6; k <= n; k += 2 )
	{
		a = k / 2;
		for ( p = 3; p <= a; p += 2 )           //??p?????
		{
			b =(int) sqrt ((double) p);
			for ( i = 2; i <= b; i ++ )
			{
				if ( p % i == 0 )	break;
			}
			if ( i == b + 1 )
			{                            //??q?????
				q = k - p;             
				c = (int) sqrt((double) q);
				for ( j = 2; j <= c; j ++)
				{
					if ( q % j == 0) break;
				}
				if ( j == c + 1 )
				{	
					cout << k << "="  << p << "+" << q <<endl;	break;
				}
			}
		}
	}
	return 0;
}