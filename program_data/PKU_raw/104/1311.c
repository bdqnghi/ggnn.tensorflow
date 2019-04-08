int main()
{
	int t,n,m;
	cin>>n>>m;
	while(1)
	{
		if(n<m)
		{
			t=n;n=m;m=t;
		}
		if(n==m)
		{
			cout<<n;
			return 0;
		}
		if(n-1==m&&n%2==1)
		{
			cout<<n/2;
			return 0;
		}
		n/=2;
		if(m==1)
		{
			cout<<"1";
			return 0;
		}
	}
}
