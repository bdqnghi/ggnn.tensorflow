int main()
{
	int n,i,a[100001],k,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>k;
	b=n;
	for(i=n;i>=1;i--)
	{
		if(a[i]==k)b--;
		if(a[i]!=k)break;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=k)
		{
			if(i<b)cout<<a[i]<<' ';
			else cout<<a[i];
		}
	}
	return 0;
}