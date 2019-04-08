


int main()
{
	int n,m,i,j,k,s=0;
	char a[102][102];
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=1;j<=n;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]=='@')
				{
					if(a[i][j+1]=='.')
					{
						a[i][j+1]='*';
					}
					if(a[i][j-1]=='.')
					{
						a[i][j-1]='*';
					}
					if(a[i+1][j]=='.')
					{
						a[i+1][j]='*';
					}
					if(a[i-1][j]=='.')
					{
						a[i-1][j]='*';
					}
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]=='*')
				{
					a[i][j]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
		{
		     if(a[i][j]=='@')
		     {
			     s++;
			 }
			// printf("%c ",a[i][j]);
		} 
	} 
	printf("%d",s);
 
	return 0;
}
