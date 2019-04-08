
int main()
{
	int a[6][6]={0},i,j,k,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(n>=5||n<0||m>=5||m<0)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<5;i++)
		{
			if(i==n)
			{
				for(j=0;j<4;j++)
				{
					printf("%d ",a[m][j]);
				}
				printf("%d\n",a[m][4]);
			}
			else if(i==m)
			{
				for(j=0;j<4;j++)
				{
					printf("%d ",a[n][j]);
				}
				printf("%d\n",a[n][4]);
			}
			else
			{
				for(j=0;j<4;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("%d\n",a[i][4]);
			}
		}
	}
}