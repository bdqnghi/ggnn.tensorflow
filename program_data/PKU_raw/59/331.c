void main()
{
	int i,j,n,m,t,sum;
	char a[100][100];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
		gets(a[i]);
	scanf("%d",&m);
	for(t=1;t<m;t++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='.'&&(a[i][j+1]=='@'||a[i][j-1]=='@'||a[i+1][j]=='@'||a[i-1][j]=='@'))
					a[i][j]='c';
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				if(a[i][j]=='c')a[i][j]='@';
		}
	}
	for(i=0,sum=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[i][j]=='@')sum++;
	}
	printf("%d\n",sum);
}
