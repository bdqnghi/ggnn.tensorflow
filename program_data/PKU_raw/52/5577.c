int main()
{
	int n,m,i;
	int a[100];
	int *p[100];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		p[i]=&a[i];
	}
	for(i=0;i<n-m;i++)
	{
		p[i+m]=&a[i];
	}
	for(i=0;i<m;i++)
	{
		p[i]=&a[n-m+i];
	}
	for(i=0;i<n-1;i++)
	{
		cout<<*p[i]<<" ";
	}
	cout<<*p[n-1]<<endl;
	return 0;
}