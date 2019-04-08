int main()
{
	int n=0,x=0,a[100]={0},i=0;
	cin>>n;
	cin>>x;
	cout<<x;
	a[x-1]=1;
	for(i=2;i<=n;i++)
	{
		cin>>x;
		if(a[x-1]==0)
		{
			cout<<" "<<x;
			a[x-1]=1;
		}
	}
	return 0;
}
