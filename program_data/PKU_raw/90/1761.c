int way (int,int);
int main()
{
	int n;
	int t[2];
	cin>>n;
	while ( n-- )
	{
		cin>>t[0]>>t[1];
		cout<<way(t[0],t[1])<<endl;
	}
}
int way(int a,int b)
{
	if ( b == 1 || a == 1 || a== 0 )
		return 1;
	if ( a >= b )     
		return way( a , b - 1 ) + way( a - b , b );
	if ( a < b )
		return way( a , a );
}