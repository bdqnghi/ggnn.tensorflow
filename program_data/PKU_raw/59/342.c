int main ()
{
	int n,m,i,j,k,b,c,d,e,p,q,u,v;
	char a[100][100];
	char x[100][100];
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		strcmp(x[i],a[i]);
	}
	scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(b=0;b<n;b++)
		{
			for(c=0;c<n;c++)
			{
				if(a[b][c]=='@')
				{
					if(b>0)
					{
						if(!(a[b-1][c]=='#'))
							x[b-1][c]='@';
					}
					if(b+1<n)
					{
						if(!(a[b+1][c]=='#'))
						x[b+1][c]='@';
					}
					if(c>0)
					{
						if(!(a[b][c-1]=='#'))
						x[b][c-1]='@';
					}
					if(c+1<n)
					{
						if(!(a[b][c+1]=='#'))
						x[b][c+1]='@';
					}
				}
			}
		}
		for(u=0;u<n;u++)
		{
			for(v=0;v<n;v++)
			{
				if(x[u][v]=='@')
				a[u][v]=x[u][v];
			}
		}
	}
	sum=0;
	for(d=0;d<n;d++)
	{
		for(e=0;e<n;e++)
		{
			if(a[d][e]=='@')
			{
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
