
char change(int m, int n);
	char suite[100][100]={0};
	char mark[100][100]={0};
int main()
{
	int n,day,t,amount=0,i,j,k,max;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",suite[i]);
	}
	scanf("%d",&day);
	for(t=0;t<day-1;t++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(suite[i][j]=='@')
				{
					mark[i][j]=1;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(mark[i][j]==1)
				{
					change(i,j);
				}
			}
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(suite[i][j]=='@')
			{
				amount++;
			}
		}
	}
	printf("%d",amount);
	return 0;
}

char change(int m, int n)
{
	if(suite[m-1][n]=='.')
	{
		suite[m-1][n]='@';
	}
	if(suite[m][n-1]=='.')
	{
		suite[m][n-1]='@';
	}
	if(suite[m+1][n]=='.')
	{
		suite[m+1][n]='@';
	}
	if(suite[m][n+1]=='.')
	{
		suite[m][n+1]='@';
	}
}
