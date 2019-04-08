int main()
{
	int a[301],n,m;
	while(1)
	{
		int i,j=0,k=0;
	cin>>n>>m;
	if(n==0)
		break;
	for(i=1;i<=n;i++)
	    a[i]=1;
	for(i=1;i<=n;i++)
	{
			j=j+a[i];
			if(j==m)
			{
				a[i]=0;
				j=0;
				k++;
			}
		if(k==n)
		{
			cout<<i<<endl;
			break;
		}
		if(i==n)
			i=0;
	}
	}
	return 0;
}
