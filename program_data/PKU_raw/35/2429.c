int main()
{
	int m,n,i,j,max,min,f=1;
	char c;
	int s[8][8],djl[8],djh[8];
	scanf("%d%c%d",&m,&c,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		 scanf("%d",&s[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		max=s[i][0];
		djl[i]=0;
		for(j=0;j<n;j++)
		{
			if(s[i][j]>max)
			{
				max=s[i][j];
				djl[i]=j;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		min=s[0][j];
		djh[j]=0;
		for(i=0;i<m;i++)
		{
			if(s[i][j]<min)
			{
				min=s[i][j];
				djh[j]=i;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(djl[i]==j&&djh[j]==i)
			{
				printf("%d+%d\n",i,j);
				f=0;
			}
		}
	}
	if(f)
		printf("No\n");
	return 0;
}