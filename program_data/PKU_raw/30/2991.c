
int main()
{
	int n;
	int num = 0;
	int m;
	scanf( "%d",&n );
	for( int i =1;i <= n ;i ++)
	{
		if( (i % 7) == 0 || (i % 10) == 7)
			continue;
		if( i / 10 != 0 )
		{
			m = i / 10;
			if( m == 7)
				continue;
		}
		num = num + i * i;
	}
	printf( "%d\n",num );
	return 0;
}