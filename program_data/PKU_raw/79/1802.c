
int main()
{	
	int a[301],m,n;
	while(1)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++) a[i]=1;
		int j=0,k=n;
		if(n==0)break;
		while(1)
		{
			for(int i=1;i<=n;i++)
			{
				j += a[i];
				if(j==m)
				{
					a[i]=0;
					j=0;
					k--;
					if(k==0)
					{
						cout<<i<<endl;
						break;
					}
				}
			}
			if(k==0)break;
		}
	}
	return 0;
}
