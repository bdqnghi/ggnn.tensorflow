void guiling(int a[100][100],int n)
{
	int i,j,min;
	for(i=0;i<=n;i++)
	{
		min=a[i][0];
		for(j=0;j<=n;j++)
		{
			if(a[i][j]<min)min=a[i][j];
		}
		for(j=0;j<=n;j++)
			a[i][j]=a[i][j]-min;
	}
	for(j=0;j<=n;j++)
	{
		min=a[0][j];
		for(i=0;i<=n;i++)
		{
			if(a[i][j]<min)min=a[i][j];
		}
		for(i=0;i<=n;i++)
			a[i][j]=a[i][j]-min;
	}
}
void shanchu(int a[100][100],int n)
{
	int i,j;
	for(i=0;i<=n;i++)
		for(j=1;j<n;j++)
			a[i][j]=a[i][j+1];
	for(j=0;j<=(n-1);j++)
		for(i=1;i<n;i++)
			a[i][j]=a[i+1][j];
}
int main()
{
	int a[100][100][100],i,j,k,sum,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=n-1;j>=1;j--)
		{
			guiling(a[i],j);
			sum=sum+a[i][1][1];
			shanchu(a[i],j);
		}
		printf("%d\n",sum);
	}
}