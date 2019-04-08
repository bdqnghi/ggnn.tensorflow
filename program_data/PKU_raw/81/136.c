int main()
{
	int i,j,n,m,z,flag,sz[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&sz[i][j]);
	}
	scanf("%d %d",&n,&m);
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(i=0;i<5;i++)
		{
			z=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=z;
		flag=1;
		}
	}
	else
		flag=0;
	if(flag==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0)
				    printf("%d",sz[i][j]);
				else
                    printf(" %d",sz[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}