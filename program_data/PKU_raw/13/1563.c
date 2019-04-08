int main()
{
	int n; 
	cin>>n;
	int zz[20000];
	int i,j;
	for ( i = 0 ; i < n ; i ++ )
		cin>>zz[i];
	for ( i = 0 ; i < n ; i ++ )
	{
		for ( j = i + 1 ; j < n ; j ++ )
		{
			if ( zz[i] == zz[j] )
			{
				zz[j] -= zz[i];
			}
		}
	}
	cout<<zz[0];
	for ( i = 1 ; i < n ; i ++ )
	{
		if ( zz[i] != 0)
			cout<<" "<<zz[i];
	}
}