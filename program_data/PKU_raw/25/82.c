int main()
{
	int n ;
	cin>>n ;
	char a[40] ;
	for(int y = 0 ; y <= 39 ; y++)
	{
		a[y] = '0' ;
	}
    a[0] = '1' ;
	int b[40] = {0} ;
	int c = 0 ;
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ; j<=39 ; j++)
		{
			b[j] = (int)((a[j] - '0') * 2 + c) ;
			c = 0 ;
			if(b[j]>=10)
			{
				a[j] = (char)(b[j] - 10 + '0') ;
				c = 1 ;
			}
			else
			{
				a[j] = (char)(b[j]+'0') ;
			}
		}
	}
	int k = 39 ;
	for( ; k>=0 ; k--)
	{
		if((a[k]-'0')!=0)
			break ;
	}
	for(; k>=0 ; k--)
	{
		cout<<a[k] ;
	}
	return 0;
}