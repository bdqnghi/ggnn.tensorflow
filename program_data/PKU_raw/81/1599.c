int F(int a[5][5],int n,int m)
{
	int i,j,tem;
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(i=0;i<5;i++)
		{
			tem=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=tem;
		}
		for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
		return 1;
	}
	else
	{
		printf("error");
		return 0;
	}
}

int main()
{
	int a[5][5];
	int n,m;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	F(a,n,m);
	return 0;
}
