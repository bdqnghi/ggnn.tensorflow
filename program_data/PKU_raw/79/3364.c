int main()
{
	int a[300];
	int i,j,k,m,n;
	int nbegin,ncounted;
	while(m!=0&&n!=0)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			a[i]=1;
		}
		nbegin=0;
		for(i=0;i<n;i++)
		{
			ncounted=0;
			for(j=nbegin;ncounted<m;j=(j+1)%n)
			{
				if(a[j]==1)ncounted++;
				if(ncounted==m)
				{
					a[j]=0;
					nbegin=(j+1)%n;
				}
			}
			if(i==n-1)
			{
				nbegin=(nbegin+n-1)%n;
				printf("%d\n",nbegin+1);
			}
		}
	}
	return 0;
}


