

int main()
{
	int n;
	int a[91];
	int i;
	for( i=0 ; i<91 ; i++ )
	{
		a[i]=0;
	}
	cin>>n;
	cin>>i;
	cout<<i;
	a[i-10]=1;
	while( n>0 )
	{
		n--;
		int b;
		cin>>b;
		if( a[b-10]==0 )
		{
			cout<<' '<<b;
			a[b-10]=1;
		}
	}
}