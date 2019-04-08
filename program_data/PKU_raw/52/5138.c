int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for( int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int *p = a + n - m;
	for( ; p < a + n ; p++)
	{
		cout<< *p<<' ';
	}
	int *q = a;
	for(; q < a + n - m ; q++)
	{
		if( q != a + n - m - 1)
			cout<< *q << ' ';
		else
			cout<< *q<<endl;
	}
	
	
	return 0;
}
	
	
