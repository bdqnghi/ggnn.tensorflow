int down(int m,int n);
void main()
{
	int a[5][5],m,n,i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(down(m,n)==0)
		printf("error");
	else
	{
		for(i=0;i<=4;i++)
		{
			if(i==m)
			{
				for(j=0;j<=3;j++)
				printf("%d ",a[n][j]);
				printf("%d",a[n][4]);
				printf("\n");
			}
			if(i==n)
			{
				for(j=0;j<=3;j++)
				printf("%d ",a[m][j]);
				printf("%d",a[m][4]);
				printf("\n");
			}
			else if(i!=m&&i!=n)
			{
				for(j=0;j<=3;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d",a[i][4]);
			printf("\n");
			}
		}
	}
}
int down(int m,int n)
{
	if(m<=4&&m>=0&&n<=4&&n>=0)
		return(1);
	else
		return(0);
}
