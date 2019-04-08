int main ( )
{
	char a[501] ;
	char *p ;
	p = a ;
	int i=0,j,k ;
	int n ;
	int sum = 0 ;
	int s[501] = {0} ;
	cin >> n ;
	cin.get( ) ;

	while(1)
	{
		*(p+i)=cin.get();
		if(*(p+i)=='\n')
			break;
		i++;
	}
	cout << endl ;
	sum = i ;
	char f[501][5] ;
	char (*q)[5] ;
	q = f ;
	int g[501] = {0} ;
	for( i = 0 ; i <= sum - n ; i++ ) 
	{
		for( j = i,k=0 ; j <= n-1+i,k<=n-1 ; j++,k++ )
		{
			*(*(q+i)+k) = *(p+j) ;	
		}
	}
	int flag[501] = {0} ;
	k = 0 ;
	int t ;

	for( i = 0 ; i <= sum - n ; i++ )
	{
		if(flag[i]==1)
		{
			k--;
			continue ;
		}
		for( j = i ; j <= sum - n ; j++ )
		{
						for( t = 0 ; t <= n - 1 ; t++ )
			{
			   if(*(*(q+i)+t)!=*(*(q+j)+t))
			   {
			       break;
			   }
			}
			if(t==n)
			{
			g[i]++;
			flag[j]=1;
			}

		}
		k++ ;
	}
	int l = 0 ;
	for( i = 0 ; i <= sum - n ; i++ )
	{
		l = max(g[i],l) ;
	}
	if(l>=2)
	{
		cout << l << endl ;
		for( i = 0 ; i <= sum - n ; i++ )
		{
			if(g[i]==l)
			{
				for( t = 0 ; t <= n - 1 ; t++ )
				{
					cout <<*(*(q+i)+t) ;
				}
				cout << endl ;
			}
		}
	}
	else
		cout << "NO" << endl ;
	return 0 ;
}