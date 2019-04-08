
int procedure (int n , int m);

int main()
{
	int ans[100];
	int n,m,t,s;
	t=0;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n==0 && m==0)
		{
			break;
		}
		else
		{
			ans[t]=procedure(n,m);
			t++;
		}
	}
	for(s=0;s<t;s++)
	{
		printf("%d\n",ans[s]);
	}
	return 0;
}

int procedure (int n , int m)
{
	int num=n;
	int i,j,k,r;
	int sz[300];
	for(i=0;i<n;i++)
	{
		sz[i]=0;
	}
	i=0;
	for(k=num;k>1;k--)
	{
		j=0;
		while(j<m)
		{
			if(i==n)
			{
				i=0;
			}
			if(j==m-1 && sz[i]==0)
			{
				sz[i]=1;
				break;
			}
			if(sz[i]==0)
			{
				j=j+1;
			}
			i=i+1;
			continue;
		}
	}
	for(r=0;r<n;r++)
	{
		if(sz[r]==0)
		{
			return r+1;
		}
	}
}