int main()
{
	int a[5][5],n,m,c,i,j,t;
	int f(int x,int y);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	c=f(n,m);
	if(c==0)
	{
		printf("error");
	}
	else
	{
	for(i=0;i<5;i++)
	{
		t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)
			{
			printf("%d ",a[i][j]);
			}
			else printf("%d",a[i][j]);
			if(j==4)
			{
				printf("\n");
			}
		}
	}
	}
	return 0;
}



int f(int x,int y)
{
	if(x>=5||y>=5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}