int main()
{
	int i,j,k,m,n,sum;
	char a[110][110];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	scanf("%d",&m);
	for(k=0;k<m-1;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					if((i+1<n)&&(i+1>=0)&&(a[i+1][j]=='.'))
						a[i+1][j]='!';
					if((i-1<n)&&(i-1>=0)&&(a[i-1][j]=='.'))
						a[i-1][j]='!';
					if((j+1<n)&&(j+1>=0)&&(a[i][j+1]=='.'))
						a[i][j+1]='!';
					if((j-1<n)&&(j-1>=0)&&(a[i][j-1]=='.'))
						a[i][j-1]='!';
				}
			}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='!')
					a[i][j]='@';
			}
	}
	sum=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				sum=sum+1;
		}
		printf("%d",sum);
	
	return 0;
}