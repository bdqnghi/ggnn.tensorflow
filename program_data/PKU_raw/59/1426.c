int main()
{
	int n,m,s=0;
	cin>>n;
	int a[150][150];
	char c;
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>c;
			if(c=='#') a[i][j]=-1;
			else if(c=='.') a[i][j]=0;
			else a[i][j]=1;
		}
	}
	cin>>m;
	for(i=2;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(a[j][k]==i-1)
				{
					if(!a[j-1][k]) a[j-1][k]=i;
					if(!a[j+1][k]) a[j+1][k]=i;
					if(!a[j][k-1]) a[j][k-1]=i;
					if(!a[j][k+1]) a[j][k+1]=i;
					a[j][k]=i;					
				}
				
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==m) s++;
		}
	}
	cout<<s<<endl;
	return 0;
}
