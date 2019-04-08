int up(int m)
{
	return (m%2==0)?m/2:(m-1)/2;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int powerm,powern;
	if (m<n) { int temp=m; m=n; n=temp;}
	for (powerm=0;(m>>powerm)>0;powerm++) ;
	for (powern=0;(n>>powern)>0;powern++) ;
	while (powerm>powern)
	{
		m=up(m);
		powerm--;
	}
	while (m!=n)
	{
		m=up(m);
		n=up(n);
	}
	cout<<m<<endl;
	return 0;
}