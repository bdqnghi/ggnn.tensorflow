int main()
{
	int num[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	int judge1[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			judge1[i][j]=0;
		}
	}
	int judge2[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			judge2[i][j]=0;
		}
	}
	for(i=0;i<5;i++)
	{
		int max=num[i][0];
		int i0=i,j0=0;
		for(j=0;j<5;j++)
		{
			if(num[i][j]>max)
			{
				i0=i;
				j0=j;
				max=num[i][j];
			}
		}
		judge1[i0][j0]=1;
	}
	for(j=0;j<5;j++)
	{
		int min=num[0][j];
		int i0=0,j0=j;
		for(i=0;i<5;i++)
		{
			if(num[i][j]<min)
			{
				i0=i;
				j0=j;
				min=num[i][j];
			}
		}
		judge2[i0][j0]=1;
	}
	int g=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(judge1[i][j]==1&&judge2[i][j]==1)
			{
				printf("%d %d %d\n",i+1,j+1,num[i][j]);
				g=1;
			}
		}
	}
	if(g==0)printf("not found\n");
	return 0;
}
