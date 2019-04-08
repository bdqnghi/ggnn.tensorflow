int main()
{
	int m , i , j , a, b, p , q;
	cin >> m;
	for ( i = 3; i <= m/2; i = i + 2)
	{
	    p = 0;
		q = 0;
		for ( a = 2; a< i ; a ++)
		{ 
			if ( i % a ==0)
			{ 
				p=1;
			}
		}
		if ( p==0 )
		{
			j = m - i ;
			for ( b = 2 ; b < j ; b ++)
			{
				if ( j % b == 0)
				{
					q=1 ;
				}
			}
			if ( q==0 )
			{
				cout << i << ' ' << j << endl;
			}
		}
	}
	return 0;
}



