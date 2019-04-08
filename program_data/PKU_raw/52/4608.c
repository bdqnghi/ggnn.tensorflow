int main()
{
	int a[101],b[101],n,i,m;
	cin>>n>>m;
	for(i=1;i<=n;i++)//????
	{cin>>a[i];}
	for(i=n-m+1;i<=n;i++)//???????
	{b[i-n+m]=a[i];}
	for(i=n-m;i>=1;i--)//??????
	{a[m+i]=a[i];}
	for(i=1;i<=m;i++)//???m???
	{a[i]=b[i];}
	for(i=1;i<n;i++)//????
	{cout<<a[i]<<" ";}
	cout<<a[n];
	return 0;
}
