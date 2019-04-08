int main()
{
	int n;
	cin>>n;
	int a[n],*p=a,v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n/2-1;i++)
	{
		v=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=v;
	}
	cout<<a[0];
	for(int i=1;i<n;i++)
	{
		cout<<' '<<a[i];
	}
	return 0;
}
