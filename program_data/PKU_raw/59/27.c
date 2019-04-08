int main() 
{
	int n,m;
	char a[103][104];
	int i,j,k,count=0,h[100][100];
	scanf("%d",&n);getchar();
	for(i=0;i<=n+1;i++)
	{
		a[0][i]='#';
		a[n+1][i]='#';
	}
	for(i=0;i<=n+1;i++)
	{
		a[i][0]='#';
		a[i][n+1]='#';
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)

		{scanf("%c",&a[i][j]);}
		getchar();
	}
    scanf("%d",&m);
	m=m-1;
	while(m--)
	{memset(h,0,sizeof(h));
	for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(a[j][k]=='@')
				{
					h[j][k]=1;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(k=1;k<=n;k++)
			{
				if(h[i][k]==1)
				{
					if(a[i][k+1]!='#')
						a[i][k+1]='@';
					if(a[i][k-1]!='#')
						a[i][k-1]='@';
					if(a[i-1][k]!='#')
						a[i-1][k]='@';
					if(a[i+1][k]!='#')
						a[i+1][k]='@';
				}
			}
		}
			for(i=0;i<=n+1;i++)
			{
				a[0][i]='#';
		        a[n+1][i]='#';
			}
	        for(i=0;i<=n+1;i++)
			{
		         a[i][0]='#';
		         a[i][n+1]='#';
			}
	}
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(a[i][j]=='@')
				count++;
		}
	}
	printf("%d\n",count);

return 0;
}
