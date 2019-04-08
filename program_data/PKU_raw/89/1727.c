

int main()
{
	int n;
	int a, b;
	int num[100000];
	cin>>n;
	memset(num,0,sizeof(num));
	while( cin>>a>>b && !( a == 0 && b == 0 ) )
	{
		num[b]++;
	}
	for( int i = 0 ; i < n ; i ++ )
	{
		if( num[i] == n - 1 ) { cout<<i<<endl; return 0; }
	}
	cout<<"NOT FOUND"<<endl;
	return 0;

}
