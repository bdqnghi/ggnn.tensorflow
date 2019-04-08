int main()
{
	int n=0,a[101],i=0,j=0,k=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
    for(i=1;i<=n-1;i++)
		cout<<a[n+1-i]<<' ';
	cout<<a[1];
	return 0;
}