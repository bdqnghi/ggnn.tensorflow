int main()
{
	int a[301],n,i,j,p,del[301]={0};
	cin>>n;
	for(i=0;i<n;i++) 
		cin>>a[i];
	cout<<a[0];
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]==a[j])
			{
				del[i]=1;
				break;
			}
		}
		if(del[i]==0) cout<<','<<a[i];
	}
	return 0;
}
