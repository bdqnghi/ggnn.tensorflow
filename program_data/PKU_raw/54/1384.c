int main()
{
	int n,k,m,i;
	cin>>n>>k;
	int a[1000]={0,k};
	while(1)
	{
		a[1]+=n;
		for(i=2;i<=n;i++)
		{
			if(a[i-1]%(n-1)!=0)
				break;
			a[i]=a[i-1]*n/(n-1)+k;
			if(i==n)
			{
				cout<<a[i];
				return 0;
			}
		}
	}
}